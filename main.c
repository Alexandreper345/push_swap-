/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:58:23 by alda-sil          #+#    #+#             */
/*   Updated: 2025/01/28 20:22:18 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

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
