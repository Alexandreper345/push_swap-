#include "../push.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*swap;

	swap = NULL;
	if (*stack_b)
	{
		swap = *stack_b;
		*stack_b = (*stack_b)->next;
		swap->next = *stack_a;
		*stack_a = swap;
		write(1, "pa\n", 1);
	}
}
