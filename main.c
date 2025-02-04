/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:58:23 by alda-sil          #+#    #+#             */
/*   Updated: 2025/02/03 20:52:19 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"


void print_list(t_list *stack)
{
    while (stack)
    {
        ft_printf("%d(%d) -> ", stack->number, stack->index);
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

int main(int argc, char **argv) {
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;
	int	i;
	t_list *current;
	t_list *fixer;
	int	j;

	j = 0;
	i = 1;
    // Adicionando elementos à stack A
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				ft_putstr_fd("Error",2);
				return (0);
			}
			j++;
		}
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
	}
	current = stack_a;
	fixer = current;
	while (fixer)
	{
		current = fixer;
		while (current->next)
		{
			if (fixer->number == current->next->number)
			{
				ft_printf("%d %d", fixer->number, current->number);
				return (0);
			}
			current = current->next;
		}
		fixer = fixer->next;
	}
    ft_printf("Stack A antes da operação:\n");
    print_list(stack_a);
    ft_printf("Stack B antes da operação:\n");
    print_list(stack_b);

    // Testando a função radix
    algorithm(&stack_a, &stack_b);

    ft_printf("\nStack A após a operação:\n");
    print_list(stack_a);
    ft_printf("Stack B após a operação:\n");
    print_list(stack_b);

    return 0;
}



