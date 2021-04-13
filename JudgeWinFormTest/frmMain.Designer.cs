
namespace JudgeWinFormTest
{
    partial class frmMain
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.panel2 = new System.Windows.Forms.Panel();
            this.btnStopGrading = new System.Windows.Forms.Button();
            this.btnExportExcel = new System.Windows.Forms.Button();
            this.btnGrading = new System.Windows.Forms.Button();
            this.btnLoadUser = new System.Windows.Forms.Button();
            this.btnLoadProblem = new System.Windows.Forms.Button();
            this.panel1 = new System.Windows.Forms.Panel();
            this.listMessages = new System.Windows.Forms.ListBox();
            this.scoreBoard = new System.Windows.Forms.DataGridView();
            this.panel2.SuspendLayout();
            this.panel1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.scoreBoard)).BeginInit();
            this.SuspendLayout();
            // 
            // panel2
            // 
            this.panel2.Controls.Add(this.btnStopGrading);
            this.panel2.Controls.Add(this.btnExportExcel);
            this.panel2.Controls.Add(this.btnGrading);
            this.panel2.Controls.Add(this.btnLoadUser);
            this.panel2.Controls.Add(this.btnLoadProblem);
            this.panel2.Dock = System.Windows.Forms.DockStyle.Top;
            this.panel2.Location = new System.Drawing.Point(0, 0);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(958, 40);
            this.panel2.TabIndex = 1;
            // 
            // btnStopGrading
            // 
            this.btnStopGrading.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.btnStopGrading.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.btnStopGrading.FlatAppearance.BorderSize = 0;
            this.btnStopGrading.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnStopGrading.Font = new System.Drawing.Font("Consolas", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnStopGrading.ForeColor = System.Drawing.Color.White;
            this.btnStopGrading.Location = new System.Drawing.Point(710, 3);
            this.btnStopGrading.Name = "btnStopGrading";
            this.btnStopGrading.Size = new System.Drawing.Size(147, 31);
            this.btnStopGrading.TabIndex = 4;
            this.btnStopGrading.Text = "Stop";
            this.btnStopGrading.UseVisualStyleBackColor = false;
            this.btnStopGrading.Click += new System.EventHandler(this.btnStopGrading_Click);
            // 
            // btnExportExcel
            // 
            this.btnExportExcel.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.btnExportExcel.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.btnExportExcel.FlatAppearance.BorderSize = 0;
            this.btnExportExcel.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnExportExcel.Font = new System.Drawing.Font("Consolas", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnExportExcel.ForeColor = System.Drawing.Color.White;
            this.btnExportExcel.Location = new System.Drawing.Point(557, 3);
            this.btnExportExcel.Name = "btnExportExcel";
            this.btnExportExcel.Size = new System.Drawing.Size(147, 31);
            this.btnExportExcel.TabIndex = 3;
            this.btnExportExcel.Text = "Export Excel";
            this.btnExportExcel.UseVisualStyleBackColor = false;
            this.btnExportExcel.Click += new System.EventHandler(this.btnExportExcel_Click);
            // 
            // btnGrading
            // 
            this.btnGrading.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.btnGrading.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.btnGrading.FlatAppearance.BorderSize = 0;
            this.btnGrading.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnGrading.Font = new System.Drawing.Font("Consolas", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnGrading.ForeColor = System.Drawing.Color.White;
            this.btnGrading.Location = new System.Drawing.Point(404, 3);
            this.btnGrading.Name = "btnGrading";
            this.btnGrading.Size = new System.Drawing.Size(147, 31);
            this.btnGrading.TabIndex = 2;
            this.btnGrading.Text = "Grading";
            this.btnGrading.UseVisualStyleBackColor = false;
            this.btnGrading.Click += new System.EventHandler(this.btnGrading_Click);
            // 
            // btnLoadUser
            // 
            this.btnLoadUser.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.btnLoadUser.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.btnLoadUser.FlatAppearance.BorderSize = 0;
            this.btnLoadUser.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnLoadUser.Font = new System.Drawing.Font("Consolas", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnLoadUser.ForeColor = System.Drawing.Color.White;
            this.btnLoadUser.Location = new System.Drawing.Point(251, 3);
            this.btnLoadUser.Name = "btnLoadUser";
            this.btnLoadUser.Size = new System.Drawing.Size(147, 31);
            this.btnLoadUser.TabIndex = 1;
            this.btnLoadUser.Text = "Load user";
            this.btnLoadUser.UseVisualStyleBackColor = false;
            this.btnLoadUser.Click += new System.EventHandler(this.btnLoadUser_Click);
            // 
            // btnLoadProblem
            // 
            this.btnLoadProblem.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.btnLoadProblem.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(0)))));
            this.btnLoadProblem.FlatAppearance.BorderSize = 0;
            this.btnLoadProblem.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.btnLoadProblem.Font = new System.Drawing.Font("Consolas", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnLoadProblem.ForeColor = System.Drawing.Color.White;
            this.btnLoadProblem.Location = new System.Drawing.Point(98, 3);
            this.btnLoadProblem.Name = "btnLoadProblem";
            this.btnLoadProblem.Size = new System.Drawing.Size(147, 31);
            this.btnLoadProblem.TabIndex = 0;
            this.btnLoadProblem.Text = "Load problem";
            this.btnLoadProblem.UseVisualStyleBackColor = false;
            this.btnLoadProblem.Click += new System.EventHandler(this.btnLoadProblem_Click);
            // 
            // panel1
            // 
            this.panel1.Controls.Add(this.scoreBoard);
            this.panel1.Controls.Add(this.listMessages);
            this.panel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.panel1.Location = new System.Drawing.Point(0, 40);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(958, 509);
            this.panel1.TabIndex = 2;
            // 
            // listMessages
            // 
            this.listMessages.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.listMessages.Font = new System.Drawing.Font("Consolas", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(163)));
            this.listMessages.FormattingEnabled = true;
            this.listMessages.ItemHeight = 22;
            this.listMessages.Location = new System.Drawing.Point(0, 307);
            this.listMessages.Name = "listMessages";
            this.listMessages.Size = new System.Drawing.Size(958, 202);
            this.listMessages.TabIndex = 0;
            // 
            // scoreBoard
            // 
            this.scoreBoard.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.scoreBoard.Dock = System.Windows.Forms.DockStyle.Fill;
            this.scoreBoard.Location = new System.Drawing.Point(0, 0);
            this.scoreBoard.Name = "scoreBoard";
            this.scoreBoard.Size = new System.Drawing.Size(958, 307);
            this.scoreBoard.TabIndex = 1;
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(958, 549);
            this.Controls.Add(this.panel1);
            this.Controls.Add(this.panel2);
            this.Name = "frmMain";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Judge";
            this.Load += new System.EventHandler(this.frmMain_Load);
            this.panel2.ResumeLayout(false);
            this.panel1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.scoreBoard)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Button btnExportExcel;
        private System.Windows.Forms.Button btnGrading;
        private System.Windows.Forms.Button btnLoadUser;
        private System.Windows.Forms.Button btnLoadProblem;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.ListBox listMessages;
        private System.Windows.Forms.Button btnStopGrading;
        private System.Windows.Forms.DataGridView scoreBoard;
    }
}

