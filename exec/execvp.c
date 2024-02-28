#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *argv[] = {"ls", "-2", NULL};
	char *env[] = {NULL};

	printf("About to run /bin/ls\n");
	execve("./app", argv, env);
	perror("Error");
	exit(1);
}
