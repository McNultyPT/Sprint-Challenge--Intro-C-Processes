**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

    Created - When a process is created it is in the "created" or "new" state awaiting the "ready" state.

    Ready - A "ready" or "waiting" process is now in the main memory awaiting execution on the CPU.

    Running - When a process is executed by the CPU it is in the "running" state.

    Blocked - A process enters "blocked" state when it can't move forward without a change in state or event.

    Terminated - When a process is complete or exited it has been "terminated".

    Swapped Out and Waiting - When a process is removed from the main memory and placed in external storage, which can then be swapped into the "waiting" state.

    Swapped Out and Blocked - A "blocked" process may be swapped out and placed into the "waiting" state.

**2. What is a zombie process?**

    It is a process that has completed execution, but still has an entry in the process table, which mean it's in the "terminated" state. The child process still needs to execute before the entry is removed from the process table.

**3. How does a zombie process get created? How does one get destroyed?**

    It is created when a parent process has finished executing, but still has a child process to complete. To get rid of it the child process must finish executing or the "kill" command can be used. It can also be removed using "wait", but if "wait" isn't called the zombie process will remain in the process table.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

    Since compiled languages are converted into machine code it is faster for the processor to execute. You also have more control over memory and CPU usage.