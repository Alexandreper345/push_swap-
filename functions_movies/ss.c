/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:29:27 by alda-sil          #+#    #+#             */
/*   Updated: 2025/01/29 19:59:18 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	t_list	*val1;
	t_list	*val2;
	t_list	*val3;
	t_list	*val4;

	val1 = NULL;
	val2 = NULL;
	val3 = NULL;
	val4 = NULL;
	if (*stack_a && (*stack_a)->next && *stack_b && (*stack_b)->next)
	{
		val1 = *stack_a;
		val2 = *stack_b;
		val3 = (*stack_a)->next;
		val4 = (*stack_b)->next;
		val1->next = val3->next;
		val3->next = val1;
		val2->next = val4->next;
		val4->next = val2;
		*stack_a = val3;
		*stack_b = val4;
		write(1, "ss\n", 3);
	}
}
