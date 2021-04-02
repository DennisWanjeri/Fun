#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *main - compares env and environ variable
 *@argc:arguement count
 *@argv:arguement vector
 *@envp:environment variable
 *Return:0 - success
 */
int main(int argc, char *argv[], char **envp)
{
	extern char **environ;

	printf("%p\n", (void *)envp);
	printf("%p\n", (void *)environ);
	return (0);
}
