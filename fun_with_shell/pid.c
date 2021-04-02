#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid, ppid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	ppid = getppid();
	printf("%u\n", ppid);
	return (0);
}
