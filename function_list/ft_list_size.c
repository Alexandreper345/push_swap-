#include "../push.h"

int ft_list_size(t_list *static_a)
{
    int count;

    count = 0;
    while (static_a)
    {
        count++;
        static_a = static_a->next;
    }
    return (count);
}
