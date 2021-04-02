#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *main - executes the command ls -l in 5 different processes
 *
 *Return:always zero
 */
int main(void)
{
	pid_t child_pid;
	int status, i;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error: ");
		}
		if (child_pid == 0)
		{
			wait(&status);
		}
		child_pid = fork();
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
	return (0);
}
