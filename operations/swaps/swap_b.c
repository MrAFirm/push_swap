/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:01:29 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/21 17:29:32 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int swap_b(t_stack_a *stack_b)
{
    int temp;
    
    if (stack_b)
    {
        temp = stack_b->top->number;
        stack_b->top->number = stack_b->top->next->number;
        stack_b->top->next->number = temp;
    }
    write(1, "sb", 2);
    return (EXIT_SUCCESS);
}
