/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:49:48 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/07 17:04:33 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int rrotate_b(t_stack_b *stack_b)
{
    t_node  *prev;
    t_node  *last;
    
    if (!stack_b || !stack_b->top || !stack_b->top->next)
        return (EXIT_FAILURE);
    last = stack_b->top;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = stack_b->top;
    stack_b->top = last;
    write(1, "rrb", 3);
    write(1, "\n", 1);
    return (EXIT_SUCCESS);
}
