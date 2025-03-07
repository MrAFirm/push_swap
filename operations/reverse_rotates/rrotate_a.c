#include "../../includes/push_swap.h"

int rrotate_a(t_stack_a *stack_a)
{
    int i;
    int j;
    int temp;
    
    i = ft_lstsize(stack_a) - 1;
    j = 0;
    if (stack_a)
    {
        while (j < i)
        {
            stack_a->number = stack_a->next_num;
            j++;
        }
        temp = stack_a->number;
        while (j >= 0)
        {
            stack_a->number = stack_a->next_num;
            j--;
        }
        stack_a->number = temp;
    }
    write(1, "rra", 3);
    return (EXIT_SUCCESS);
}
