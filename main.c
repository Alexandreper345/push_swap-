/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:58:23 by alda-sil          #+#    #+#             */
/*   Updated: 2025/01/31 20:07:17 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

/*
int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	if (argc < 2)
		return (0);
	else
	{
		i = 0;
		stack_a = NULL;
		stack_b = NULL;
		while (i < argc)
		{
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(argv[i])));
			i++;
		}
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

int main(int argc, char **argv) {
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;
	int	i;


	i = 0;
    // Adicionando elementos à stack A
	while (i < argc)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(argv[i])));
		i++;
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



