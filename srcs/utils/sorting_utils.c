/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:07:34 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/07 21:39:59 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack_a   *smallest_num_a(t_stack_a *stack_a)
{
    int temp;

    temp = 0;
    while (stack_a)
    {
        if (stack_a->top->number > stack_a->next_num)
        {
            temp = stack_a->top->number;
            stack_a->top->number = stack_a->next_num;
            stack_a->next_num = temp;
        }
        stack_a = stack_a->next_num;
    }
    return (stack_a->top->number);
}
