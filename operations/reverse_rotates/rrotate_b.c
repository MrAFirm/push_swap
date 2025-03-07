#include "../../includes/push_swap.h"

int rrotate_b(t_stack_b *stack_b)
{
    int i;
    int j;
    int temp;
    
    i = ft_lstsize(stack_b) - 1;
    j = 0;
    if (stack_b)
    {
        while (j < i)
        {
            stack_b->number = stack_b->next_num;
            j++;
        }
        temp = stack_b->number;
        while (j >= 0)
        {
            stack_b->number = stack_b->next_num;
            j--;
        }
        stack_b->number = temp;
    }
    write(1, "rrb", 3);
    return (EXIT_SUCCESS);
}
