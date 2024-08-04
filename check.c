#include "monty.h"

/**
 * Check - Function used to check which function has been called
 * 
 * @opcode: opcode to be matched
 * @stack: top of the stack
 * @ln: line number
 */

void check(char *opcode, stack_t **stack, unsigned int Ln)
{
	int i = 0;

	instruction_t commands[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	while (commands[i].opcode != NULL)
	{
		if (strcmp(opcode, commands[i].opcode) == 0)
		{
			commands[i].f(stack, Ln);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: Unknown instruction %s", Ln, opcode);
	exit(EXIT_FAILURE);
}
