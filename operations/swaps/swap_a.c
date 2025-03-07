/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:25:18 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/02/24 21:56:12 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int swap_a(t_stack_a *stack_a)
{
    int temp;
    
    if (stack_a)
    {
        temp = stack_a->number;
        stack_a->number = stack_a->next_num;
        stack_a->next_num = temp;
    }
    write(1, "sa", 2);
    return (EXIT_SUCCESS);
