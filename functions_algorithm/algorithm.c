#include "../push.h"

/*
void	handle_four(t_list **static_a, t_list **static_b)
{

}
*/
void	handle_three(t_list **static_a)
{
	int val1;
	int val2;
	int val3;

	val1 = (*static_a)->number;
	val2 = (*static_a)->next->number;
	val3 = (*static_a)->next->next->number;
	if (val1 < val3  && val1 > val2)
		ft_sa(static_a);
	else if (val2 > val1 && val2 > val3 && val1 > val3)
		ft_rra(static_a);
	else if (val1 > val2 && val3 > val2)
		ft_ra(static_a);
	else if (val1 > val2 && val2 > val3)
	{
		ft_sa(static_a);
		ft_rra(static_a);
	}
	else if (val2 > val3 && val3 > val1)
	{
		ft_ra(static_a);
		ft_sa(static_a);
		ft_rra(static_a);
	}	
}

void	handle_five(t_list **static_a, t_list **static_b)
{
	t_list current;

	current = *static_a;
	while (current && current->next)
	{
		if (current->number > current->next)
			
	}
	
}

void	radix(t_list **static_a, t_list **static_b)
{
	int index_bit;
	int len;
	int index;
	int	index_stack_b;
	int	len_stack_b;
	int sorted;
	int *array;

	len = ft_list_size(*static_a);
	array = array_of_list(static_a,len);
	index_bit = 0;
	index_stack_b = 0;
	while (index_bit < 10)
	{
		sorted = is_list_sorted(static_a,len,array);
		if (sorted)
			break;
		index = 0;
		while (index < len)
		{
			if (*static_a && ((*static_a)->index >> index_bit) & 1)
				ft_ra(static_a);
			else
				ft_pb(static_a, static_b);
			index++;	
		}
		len_stack_b = ft_list_size(*static_b);
		index_stack_b = 0;
		while (index_stack_b < len_stack_b)
		{
			ft_pa(static_a, static_b);
			index_stack_b++;
		}
		index_bit++;
	}
}


void algorithm(t_list **static_a, t_list **static_b)
{
	int size;
	int *array;

	size = ft_list_size(*static_a);
	array = array_of_list(static_a,size);
	if (size > 5)
		radix(static_a, static_b);
	
	else if (size == 5)
		handle_five(static_a, static_b,array, size);
	//else if (size == 4)
		
	else if (size == 3)
		handle_three(static_a);
	else if (size == 2)	
		ft_sa(static_a);
}
