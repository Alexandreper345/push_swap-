#include "../push.h"

void    ft_ra(t_list **stack_a)
{
    t_list *first;
    t_list *second;
    t_list *last;


    last = NULL;
    first = NULL;
    second = NULL;
    if (*stack_a && (*stack_a)->next)
    {
        first = *stack_a;
        second = (*stack_a)->next;
        *stack_a = second;
        first->next = NULL;
        last = ft_lstlast(*stack_a);
        last->next = first;
        write(1,"ra\n", 3);
    }

}