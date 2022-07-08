#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int con, byte;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)

	
