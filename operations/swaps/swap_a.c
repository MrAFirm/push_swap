/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:25:18 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/21 17:28:46 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int swap_a(t_stack_a *stack_a)
{
    int temp;
    
    if (stack_a)
    {
        temp = stack_a->top->number;
        stack_a->top->number = stack_a->top->next->number;
        stack_a->top->next->number = temp;
    }
    write(1, "sa", 2);
    return (EXIT_SUCCESS);
