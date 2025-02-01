#include "../push.h"

void	ft_sort_lst(t_list *lst)
{
	int	swap;
    int sorted;
    t_list *curr;
    t_list *last;

    curr = lst;
    sorted = 0;
    last = ft_lstlast(lst);
    while (curr < last)
	{
		while (lst->index > lst->next->index)
		{
			swap = lst->number;
			lst->number = lst->next->number;
			lst->next->number = swap;
            curr = lst;
		}
		curr = curr->next;
	}
}

int	is_list_sorted(t_list **static_a, int size, int *array)
{
	t_list *current;
	int	index;

	index = 0;
	current = *static_a;
	while (current && index < size)
	{
		if (current->index != array[index])
			return (0);
		current = current->next;
		index++;
	}
	return (1);
}

void	index_list(t_list **static_a)
{
	t_list *current;
    int     index;

	current = *static_a;
    index = 0;
	ft_sort_lst(current);
	while (current)
	{
		current->index = index;
        current = current->next;
        index++;
	}
}