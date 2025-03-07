#include "../../includes/push_swap.h"

int rrrotate(t_stack_a *stack_a, t_stack_b *stack_b)
{
    if (stack_a && stack_b)
    {
        rrotate_a(stack_a);
        rrotate_b(stack_b);
    }
    write(1, "rrr", 3);
    return (EXIT_SUCCESS);
}
