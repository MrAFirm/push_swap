/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_b_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:18:14 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/25 17:45:24 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack_b    *stack_b_init(void)
{
    t_stack_b   *stack_b;
    stack_b = malloc(sizeof(t_stack_b));
    if (!stack_b)
        return (NULL);
    stack_b->top = NULL;
    return (stack_b);
}
t_node  *get_last_node_b(t_stack_b *stack_b)
{
    t_node      *current;

    if (!stack_b || !stack_b->top)
        return (NULL);
    current = stack_b->top;
    while (current->next)
        current = current->next;
    return (current);
}

/*
int node_add_back_b(t_stack_b *stack_b, int value)
{
    t_node  *last;
    t_node  *new;

    new = new_node(value);
    if (!new)
        return (EXIT_FAILURE);
    new->next = NULL;
    if (stack_b && new)
    {
        if(!stack_b->top)
        {
            stack_b->top = new;
            ft_printf("First node address: %p\n", (void *)stack_b->top);
        }
        else
        {
            last = get_last_node_b(stack_b);
            ft_printf("Last node address: %p\n", (void *)last);
            if (last)
                last->next = new;
            ft_printf("Last node->next: %p\n", (void *)last->next);
        }
    }
    return (EXIT_SUCCESS);
}
*/
