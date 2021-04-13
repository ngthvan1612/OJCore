namespace OJS.Workers.Executors
{
    public interface IProcessExecutorFactory
    {
        IExecutor CreateProcessExecutor(
            int baseTimeUsed,
            int baseMemoryUsed,
            ProcessExecutorType type);
    }
}
