#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *main - prints "$", waits for user to enter a command and prints
 *it in the next line
 *@argc:arguement count
 *@argv:arguement vector
 *Return:always 0
 */
int main(int argc, char *argv[])
{
	char *buffer;
	size_t bufflen = 100;

	buffer = malloc(sizeof(char) * bufflen);
	if (buffer == NULL)
	{
		exit(98);
	}
	printf("$ ");
	getline(&buffer, &bufflen, stdin);
	printf("%s", buffer);
	return (0);
}
