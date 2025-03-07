/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:49:48 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/07 21:27:28 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
            stack_b->top->number = stack_b->next_num;
            j++;
        }
        temp = stack_b->top->number;
        while (j >= 0)
        {
            stack_b->top->number = stack_b->next_num;
            j--;
        }
        stack_b->top->number = temp;
    }
    write(1, "rrb", 3);
    return (EXIT_SUCCESS);
}
