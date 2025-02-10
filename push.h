#ifndef PUSH_H
# define PUSH_H
# include <stdlib.h>
# include <unistd.h>
# include "Printf/ft_printf.h"
#include <unistd.h>

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
void	ft_sort_int_tab(int *tab, int size);
int		is_list_sorted(t_list **static_a, int size, int *array);
int		*array_of_list(t_list **static_a, int size);
void	algorithm(t_list **static_a, t_list **static_b);
void	radix(t_list **static_a, t_list **static_b);
int		is_list_sorted(t_list **static_a, int size, int *array);
void	lst_index(int *array, t_list **static_a, int size);
int		ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void   find_two_min(t_list **static_a, int *min1, int *min2);
void   find_un_min(t_list **static_a, int *min1);
size_t	ft_strlen(const char *s);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);


#endif