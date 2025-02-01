/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:58:31 by alda-sil          #+#    #+#             */
/*   Updated: 2025/01/31 21:04:11 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->number = content;
	new_node->next = NULL;
	new_node->index = -1;
	return (new_node);
}
