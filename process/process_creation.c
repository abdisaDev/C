#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (void)
{
    pid_t pid, mypid, myppid;
    pid = getpid();
    printf("Before fork(): calling process id is %d --- %d\nP1 ID:- %d\n\n", pid, getpid(),getppid());
    pid = fork();

    if (pid < 0){
        perror("Unable to create process");
        return(1);
    }

    if (pid == 0)
    {
        printf("calling process\n");
        mypid = getpid();
        myppid = getppid();
        printf("+++ C4 ID:- %d\n", mypid);
        printf("+++ P4 ID:- %d\n\n", myppid);
    } else {
        printf("calling process\n");
        mypid = getpid();
        myppid = getppid();
        printf("c2 ID:- %d\n", mypid);
        printf("P2 ID:- %d\n", myppid);
        printf("c3 ID:- %d\n\n", pid);
    }
    
    return (0);
}