#ifndef PUSH_H
# define PUSH_H
# include <stdlib.h>
# include <unistd.h>
# include "Printf/ft_printf.h"

typedef struct s_list
{
	int				number;
	int				index;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content);
void	ft_sa(t_list **stack);
void	ft_sb(t_list **stack);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_a, t_list **stack_b);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
int		ft_atoi(const char *nptr);
int		ft_list_size(t_list *static_a);
void	ft_sort_lst(t_list *lst);
int		is_list_sorted(t_list **static_a, int size, int *array);
void	index_list(t_list **static_a);
void	algorithm(t_list **static_a, t_list **static_b);
void	radix(t_list **static_a, t_list **static_b);

#endif