#include "../push.h"

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*prev_a;
	t_list	*prev_b;
	t_list	*curr_a;
	t_list	*curr_b;

	prev_a = NULL;
	prev_b = NULL;
	if (*stack_a && *stack_b && (*stack_a)->next != NULL && (*stack_b)->next != NULL)
	{
		curr_a = *stack_a;
		curr_b = *stack_b;
		while (curr_a ->next && curr_b->next)
		{
			prev_a = curr_a;
			prev_b = curr_b;
			curr_a = curr_a->next;
			curr_b = curr_b->next;
		}
		curr_a->next = *stack_a;
		curr_b->next = *stack_b;
		prev_a->next = NULL;
		prev_b->next = NULL;
		*stack_a = curr_a;
		*stack_b = curr_b;
		write(1, "rrr", 3);
	}
}
