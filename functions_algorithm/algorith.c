#include "../push.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int index;
	int	swap;
	
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

int	*array_of_list(t_list **static_a, int size)
{
	int	index;
	int *array;
	t_list *current;

	index = 0;
	current = *static_a;
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

	return(array);
}

void	radix(t_list **static_a, t_list **static_b)
{
	int index_bit;
	int len;
	int index;
	int	index_stack_b;
	int	len_stack_b;

	len = ft_list_size(*static_a);
	index_bit = 0;
	index_stack_b = 0;
	while (index_bit < 3)
	{
		index = 0;
		while (index < len)
		{
			if (*static_a && ((*static_a)->number >> index_bit) & 1)
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

/*
void algorithm(t_list **static_a, t_list **static_b)
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


void print_array_with_indices(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        ft_printf("Index %d: %d\n", i, array[i]);
    }
}

int main()
{
    t_list *stack_a = NULL;
    int *array;
    int size;


    // Preenche a lista encadeada com valores
    ft_lstadd_back(&stack_a, ft_lstnew(1));
    ft_lstadd_back(&stack_a, ft_lstnew(5));
    ft_lstadd_back(&stack_a, ft_lstnew(4));
    ft_lstadd_back(&stack_a, ft_lstnew(3));
    // Verifique o conteúdo da lista antes
    ft_printf("Stack A antes de criar o array:\n");
    print_list(stack_a);

    size = ft_list_size(stack_a);

    // Converte a lista para array
    array = array_of_list(&stack_a, size);

    // Exibe o array gerado (agora mostrando os valores e seus índices)
    ft_printf("\nArray gerado a partir da lista (ordenado):\n");
    print_array_with_indices(array, size);

    // Libera o array
    free(array);
    return 0;
}