/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:01:50 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/14 14:26:32 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int sort_2(t_stack_a *stack_a)
{
    t_stack_a   *temp;
    
    temp = smallest_num_a(stack_a);
    if ((stack_a->top->number > stack_a->top->next_num) && stack_a->top->number != temp)
    {
        if (stack_a->top->next_num == temp)
            return (swap_a(stack_a));
    }
    if (stack_a->top->number == temp)
        return (EXIT_SUCCESS);
    return (EXIT_SUCCESS);
}  


int sort_3(t_stack_a *stack_a)
{
    t_stack_a   *temp;
    t_stack_a   *temp2;

    temp = smallest_num_a(stack_a);
    temp2 = biggest_num_a(stack_a);
    if (stack_a->top->number == temp)
        stack_a->top->number = stack_a->top->next_num;
    else if (stack_a->top->number != temp && stack_a->top->next_num == temp)
        return (swap_a(stack_a));
    else if (stack_a->top->number == temp2 && stack_a->top->next_num == temp)
    {
        swap_a(stack_a);
        rrotate_a(stack_a);
    }
    if ((stack_a->top->number > stack_a->top->next_num) || stack_a->top->number != temp)
    {
        if (stack_a->top->number == temp2)
        {
            rotate_a(stack_a);
            swap_a(stack_a);
        }
    }
    else if (stack_a->top->number == temp)
        return (rotate_a(stack_a));
    else if (stack_a->top->number == temp2)
        return (rrotate_a(stack_a));
    return (EXIT_SUCCESS);
}

int sort_4(t_stack_a *stack_a)
{
    
}