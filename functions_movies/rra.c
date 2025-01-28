#include "../push.h"

void	ft_rra(t_list **stack_a)
{
	t_list	*prev;
	t_list	*current;

	current = *stack_a;
	prev = NULL;
	if (*stack_a && (*stack_a)->next != NULL)
	{
		while (current->next)
		{
			prev = current;
			current = current->next;
		}
		current->next = *stack_a;
		prev->next = NULL;
		*stack_a = current;
		write(1, "rra", 3);
	}
}
