#include "../push.h"

void    ft_pb(t_list **stack_a, t_list **stack_b)
{
    t_list *swap;

    swap = NULL;
    if (*stack_a)
    {
        swap = *stack_a;
        *stack_a = (*stack_a)->next;
        swap->next = *stack_b;
        *stack_b = swap;
        write(1,"pb\n", 1);           
    }
    
}