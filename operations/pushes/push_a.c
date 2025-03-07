/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:19:04 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/07 21:26:12 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int push_a(t_stack_a *stack_a, t_stack_b *stack_b)
{
    if (stack_a && stack_b)
    {
        stack_a->top->number = stack_b->push_num;
        stack_b->push_num = stack_b->next_num;
    }
    write(1, "pa", 2);
    return (EXIT_SUCCESS);
}