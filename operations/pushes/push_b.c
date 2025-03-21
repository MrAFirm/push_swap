/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:19:20 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/21 17:20:57 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int push_b(t_stack_a *stack_a, t_stack_b *stack_b)
{
    if (stack_a && stack_b)
    {
        stack_b->top->number = stack_a->push_num;
        stack_a->push_num = stack_b->top->next->number;
    }
    write(1, "pb", 2);
    return (EXIT_SUCCESS);
}