using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TestProject
{
    public partial class frmMain : Form
    {
        private const int MAX_THREAD = 50;

        public frmMain()
        {
            InitializeComponent();
        }

        private void btnStart_Click(object sender, EventArgs e)
        {
            panelThreads.Controls.Clear();
            for (int i = 0; i < MAX_THREAD; ++i)
            {
                ProgressBar p = new ProgressBar()
                {
                    Dock = DockStyle.Top,
                    Height = 20,
                    Maximum = 100,
                };
                p.ForeColor = Color.Red;
                p.Value = i * 2;
                p.Margin = new Padding(0, 0, 0, 20);
                panelThreads.Controls.Add(p);
            }
            MessageBox.Show(panelThreads.Controls.Count.ToString());
            CancellationTokenSource cancellation = new CancellationTokenSource();
            SingleThreadTaskScheduler scheduler = new SingleThreadTaskScheduler(cancellation.Token);
            for (int i = 0; i < MAX_THREAD; ++i)
            {
                ProgressBar p = panelThreads.Controls[i] as ProgressBar;
                scheduler.Schedule(() =>
                {
                    Invoke(new MethodInvoker(() =>
                    {
                        p.Value++;
                    }));
                });
            }
            scheduler.Complete();
            scheduler.Start();
        }
    }

    public sealed class SingleThreadTaskScheduler : TaskScheduler
    {
        [ThreadStatic]
        private static bool isExecuting;
        private readonly CancellationToken cancellationToken;

        private readonly BlockingCollection<Task> taskQueue;

        public SingleThreadTaskScheduler(CancellationToken cancellationToken)
        {
            this.cancellationToken = cancellationToken;
            this.taskQueue = new BlockingCollection<Task>();
        }

        public void Start()
        {
            new Thread(RunOnCurrentThread) { Name = "STTS Thread" }.Start();
        }

        public Task Schedule(Action action)
        {
            return
                Task.Factory.StartNew
                    (
                        action,
                        CancellationToken.None,
                        TaskCreationOptions.None,
                        this
                    );
        }

        private void RunOnCurrentThread()
        {
            isExecuting = true;

            try
            {
                foreach (var task in taskQueue.GetConsumingEnumerable(cancellationToken))
                {
                    TryExecuteTask(task);
                }
            }
            catch (OperationCanceledException)
            { }
            finally
            {
                isExecuting = false;
            }
        }

        public void Complete() { taskQueue.CompleteAdding(); }
        protected override IEnumerable<Task> GetScheduledTasks() { return null; }

        protected override void QueueTask(Task task)
        {
            try
            {
                taskQueue.Add(task, cancellationToken);
            }
            catch (OperationCanceledException)
            { }
        }

        protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
        {
            if (taskWasPreviouslyQueued) return false;

            return isExecuting && TryExecuteTask(task);
        }
    }
}
