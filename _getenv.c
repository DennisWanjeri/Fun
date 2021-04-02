#include <stdio.h>
#include <stdlib.h>
/**
 *main - using getenv function
 *@argv:arguement vector
 *@argc:arguement count
 *@envp:environment var
 *Return:0
 */
int main(int argc, char **argv, char **envp)
{
	printf("Path: %s\n", getenv("PATH"));
	printf("Home: %s\n", getenv("Home"));
	printf("PWD: %s\n", getenv("PWD"));
	return (0);
}
