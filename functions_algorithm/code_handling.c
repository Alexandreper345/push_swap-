#include "../push.h"

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

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

void   find_two_min(t_list **static_a, int *min1, int *min2)
{
    t_list *current;

    current = *static_a;
    *min1 = current->number;
    *min2 = current->next->number;
    if (*min1 > *min2)
        ft_swap(min1, min2);
    current = current->next->next;
    while (current)
    {
        if (current->number < *min1)
        {
            *min2 = *min1;
            *min1 = current->number;
        }
        else if (current->number < *min2)
        {
            *min2 = current->number;
        }
        current = current->next;
    }
}


void   find_un_min(t_list **static_a, int *min1)
{
    t_list *current;

    current = *static_a;
    *min1 = current->number;

    current = current->next;
    while (current)
    {
        if (current->number < *min1)
            *min1 = current->number;
        current = current->next;
    }
}
