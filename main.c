/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alda-sil <alda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:58:23 by alda-sil          #+#    #+#             */
/*   Updated: 2025/01/23 21:41:46 by alda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"


void print_list(t_list *stack)
{
    t_list *temp = stack;
    
    while (temp) 
    {
        ft_printf("%d -> ", temp->number);
        temp = temp->next;
    }
    ft_printf("NULL\n");
}


int main(int argc,char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int i = 1;

    if (argc < 2)
        return (0);
    else
    { 
	    stack_a = NULL;
	    stack_b = NULL;

        while (i < argc)
        {
            ft_lstadd_back(&stack_a, ft_lstnew(atoi(argv[i])));
            i++;
        }
	    //stack_b = ft_lstnew(atoi(argv[3]));
        //ft_lstadd_back(&stack_b, ft_lstnew(atoi(argv[4])));
    }
    
    /*
    // Adiciona alguns elementos em stack_b para teste de pa
    ft_lstadd_back(&stack_b, ft_lstnew(99));
    ft_lstadd_back(&stack_b, ft_lstnew(88));
    ft_lstadd_back(&stack_b, ft_lstnew(77));
    
    // Imprime o conteúdo de stack_a antes da operação
    ft_printf("Conteúdo de stack_a antes de PB:\n");
    print_list(stack_a);
    
    // Imprime o 'conteúdo de stack_b antes da operação
    ft_printf("Conteúdo de stack_b antes de PB:\n");
    print_list(stack_b);
    
    // Realiza o PB
    ft_pb(&stack_a, &stack_b);
    
    // Imprime o conteúdo de stack_a após a operação
    ft_printf("\nConteúdo de stack_a após PB:\n");
    print_list(stack_a);
    
    // Imprime o conteúdo de stack_b após a operação
    ft_printf("Conteúdo de stack_b após PB:\n");
    print_list(stack_b);
    */

    ft_printf("antes de entrar no RA\n");
    print_list(stack_a);

    ft_rb(&stack_a);

    ft_printf("\ndepois de entrar no RA\n");
    print_list(stack_a);
}