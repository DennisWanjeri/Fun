#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	printf("I am : %d\n", (int) getpid());
	pid_t pid = fork();
	if (pid < 0)
		perror("fork failed\n");
	if (pid == 0)
		printf("I am the child process with pid %d\n", (int) getpid());

	if (pid > 0)
		printf("I am the parent with pid: %d\n", (int) pid);
	return (0);
}
