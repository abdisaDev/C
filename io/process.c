#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    pid_t current_process;

    current_process = getppid();
    printf("%u", current_process);

    return (EXIT_SUCCESS);
}