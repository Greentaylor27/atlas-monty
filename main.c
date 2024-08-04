#include "monty.h"
/**
 * main - open, read, and parse the monty file
 *
 * @argc: argument count
 * @argv: argument list
 *
 * Return: On success: EXIT_SUCCESS
 * On failure: EXIT_FAILURE
 **/

int main(int argc, char **argv)
{
	FILE *file = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
