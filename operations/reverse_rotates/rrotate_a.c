/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:49:39 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/11 16:51:27 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        temp = stack_a->top->number;
        while (j < i)
        {
            stack_a->top->number = stack_a->top->next_num;
            j++;
        }
        stack_a->top->next_num = temp;
    }
    write(1, "rra", 3);
    return (EXIT_SUCCESS);
}
