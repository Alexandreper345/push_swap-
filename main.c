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

char *ft_strjoin_with_space(int argc, char **argv)
{
	char *joined;
	char *temp;
	int	i;

	i = 1;
	joined = ft_strdup("");
	while (i < argc)
	{
		temp = joined;
		joined = ft_strjoin(joined, argv[i]);
		if (i + 1 < argc)
		{
			temp = joined;
			joined = ft_strjoin(joined, " ");
			free(temp);
		}
		i++;
	}
	return (joined);
}

void	build_stack_from_args(t_list **stack, int argc, char **argv)
{
	char *joined_args;
	char **numbers;
	int i;
	int num;

	i = 0;
	joined_args = ft_strjoin_with_space(argc, argv);
	numbers = ft_split(joined_args, ' ');
	free(joined_args);

	while (numbers[i])
	{
		num = ft_atoi(numbers[i]);
		ft_lstadd_back(stack, ft_lstnew(num));
		free(numbers[i]);
		i++;	
	}
	free(numbers);
}

int main(int argc, char **argv)
{
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;
	int	i;
	t_list *current;
	t_list *fixer;
	int	j;
	int size;
	int sorted;
	int *array;

	j = 0;
	i = 1;
    // Adicionando elementos à stack A
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
	
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				ft_putstr_fd("Error",2);
				return (1);
			}
			while ((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == ' ')
				j++;
			if (argv[i][j] && !(argv[i][j] >= '0' && argv[i][j] <= '9') && argv[i][j] != '-' && argv[i][j] != '+')
        	{
         	   ft_putstr_fd("Error\n", 2);
         	   return (1);
        	}
		}
		i++;
	}
	
	build_stack_from_args(&stack_a,argc,argv);
	size = ft_list_size(stack_a);
	array = array_of_list(&stack_a , size);
	sorted = is_list_sorted(&stack_a,size,array);
	if (sorted)
	{
		write(1, "\n",1);
		return (0);
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
                ft_putstr_fd("Error",2);
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