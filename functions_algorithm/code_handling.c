#include "../push.h"

//void ft_argv_is_number_repeat()
int is_list_sorted(t_list **static_a, int size, int *array)
{
    t_list *current;
    int     index;

    index = 0;
    current = *static_a;
    while (current && index < size)
    {
        if (current->number != array[index])
            return (0);
        current = current->next;
        index++;
    }
    return (1);
}