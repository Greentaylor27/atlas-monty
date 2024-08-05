#include "monty.h"

/**
 * push - Places an element on top of the stack
 * 
 * @stack: pointer to the head element of the stack
 * @LineN: Line number
*/

void push(stack_t **stack, unsigned int LineN)
{

int value, index;
stack_t *newElement;
char *token;

if (!stack)
{
	fprintf(stderr, "L%d: usage: push integer\n", LineN);
	exit(EXIT_FAILURE);
}

newElement = (stack_t *)malloc(sizeof(stack_t));
if (!newElement)
{
	fprintf(stderr, "Error: malloc failed");
	exit(EXIT_FAILURE);
}

token = strtok(NULL, " \t\n");
if (!token)
{
	fprintf(stderr, "L%d: usage: push integer\n", LineN);
	free(newElement);
	exit(EXIT_FAILURE);
}

value = atoi(token);
if (value == 0 && (token[0] != '0' || token[1] != '\0'))
{
	fprintf(stderr, "L%d: usage: push integer\n", LineN);
	free(newElement);
	exit(EXIT_FAILURE);
}
newElement->n = value;
newElement->next = *stack;

if (*stack)
	(*stack)->prev = newElement;
*stack = newElement;
}
