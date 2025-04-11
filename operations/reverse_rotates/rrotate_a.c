/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:49:39 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/07 17:16:01 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int rrotate_a(t_stack_a *stack_a)
{
    t_node  *prev;
    t_node  *last;
    
    if (!stack_a || !stack_a->top || !stack_a->top->next)
        return (EXIT_FAILURE);
    prev = NULL;
    last = stack_a->top;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = stack_a->top;
    stack_a->top = last;
    write(1, "rra", 3);
    write(1, "\n", 1);
    return (EXIT_SUCCESS);
}
