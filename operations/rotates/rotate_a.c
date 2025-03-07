/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:58:22 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/07 19:40:46 by lkhye-ya         ###   ########.fr       */
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
        temp = stack_a->number;
        while (j < i)
        {
            stack_a->number = stack_a->next_num;
            j++;
        }
        stack_a->number = temp;
    }
    write(1, "ra", 2);
    return (EXIT_SUCCESS);
}
