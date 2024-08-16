#include "monty.h"

/**
 * pall - prints entire stack.
 *
 * @stack: pointer to a pointer to head of stack
 * LineN: Line number.
 */
void pall(stack_t **stack, unsigned int LineN)
{
	stack_t *temp = NULL;

	if (!*stack || LineN <= 0)
		return;
	
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
