#include "monty.h"
/**
 * f_add - it comibines the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *f;
	int len = 0, aux;

	f = *head;
	while (f)
	{
		f = f->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	f = *head;
	aux = f->n + f->next->n;
	f->next->n = aux;
	*head = f->next;
	free(f);
}
