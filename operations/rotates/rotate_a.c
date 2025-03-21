/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:58:22 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/21 17:27:56 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int rotate_a(t_stack_a *stack_a)
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
            stack_a->top->number = stack_a->top->next->number;
            j++;
        }
        stack_a->top->number = temp;
    }
    write(1, "ra", 2);
    return (EXIT_SUCCESS);
}
