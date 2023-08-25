#include "monty.h"

/**
* handle_swap_command - swaps top 2 elements;
* @head: matching pointer to stack head
* @num: queue number
*
* Return: void
*/

void handle_swap_command(stack_t **head, unsigned int num)
{
	int t_value;
	stack_t *temp = *head;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	else
	{
		t_value = temp->n;
		temp->n = temp->next->n;
		temp->next->n = t_value;
	}
}
