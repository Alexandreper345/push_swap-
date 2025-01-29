#include "../push.h"


void	bitwise(t_list *static_a, t_list *static_b)
{
	int index_bit;
	int len;
	int index;
	int	index_stack_b;
	int	len_stack_b;

	len = ft_list_size(static_a);
	index_bit = 0;
	index_stack_b = 0;
	while (index_bit <= 3)
	{
		index = 0;
		while (index <= len)
		{
			if (static_a && (static_a->number >> index_bit) & 1)
				ft_ra(&static_a);
			else
				ft_pb(&static_a, &static_b);
			index++;	
		}
		len_stack_b = ft_list_size(static_b);
		while (index_stack_b < len_stack_b)
		{
			ft_pa(&static_a, &static_b);
			index_stack_b++;
		}
		index_bit++;
	}
}


/*
void algorith(t_list **static_a, t_list **static_b)
{
	while ()
	{
		 
	}
}

*/

void print_list(t_list *stack)
{
    while (stack)
    {
        ft_printf("%d -> ", stack->number);
        stack = stack->next;
    }
    ft_printf("NULL\n");
}


int main()
{
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;

    ft_lstadd_back(&stack_a, ft_lstnew(1));
    ft_lstadd_back(&stack_a, ft_lstnew(5));
    ft_lstadd_back(&stack_a, ft_lstnew(4));
    ft_lstadd_back(&stack_a, ft_lstnew(3));

    ft_printf("Stack A antes da operação:\n");
    print_list(stack_a);
    ft_printf("Stack B antes da operação:\n");
    print_list(stack_b);

    bitwise(stack_a, stack_b);

    ft_printf("\nStack A após a operação:\n");
    print_list(stack_a);
    ft_printf("Stack B após a operação:\n");
    print_list(stack_b);

    return 0;
}