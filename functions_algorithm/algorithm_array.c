#include "../push.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int swap;

	index = 0;
	while (index < (size - 1))
	{
		while (tab[index] > tab[index + 1])
		{
			swap = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = swap;
			index = 0;
		}
		index++;
	}
}

void	lst_index(int *array, t_list **static_a, int size)
{
	t_list *current;
	int	i;

	current = *static_a;
	i = 0;
	while (current)
	{
		i = 0;
		while (i < size)
		{

			if (current->number == array[i])
			{
				current->index = i;
				break;
			}
			i++;
		}
		current = current->next;
	}
}


int	*array_of_list(t_list **static_a, int size)
{
	t_list 	*current;
    int     index;
	int		*array;

	current = *static_a;
    index = 0;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (current)
	{
		array[index] = current->number;
        current = current->next;
        index++;
	}
	ft_sort_int_tab(array,size);
	lst_index(array,static_a, size);
	return (array);
}