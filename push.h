#ifndef PUSH_H
# define PUSH_H

typedef struct s_list
{
    int number;
    struct s_list *next;

}   t_list;

# include <stdlib.h>
# include <unistd.h>
# include "Printf/ft_printf.h"
t_list	*ft_lstnew(int content);
void    ft_sa(t_list **stack);
void    ft_sb(t_list **stack);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void    ft_ss(t_list **stack_a, t_list **stack_b);
void    ft_pa(t_list **stack_a,t_list **stack_b);
void    ft_pb(t_list **stack_a, t_list **stack_b);
void    ft_ra(t_list **stack_a);
void    ft_rb(t_list **stack_b);

#endif