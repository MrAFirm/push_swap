/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:09:14 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/21 18:40:03 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    swap_ss(t_stack_a *stack_a, t_stack_b *stack_b)
{
    if (stack_a && stack_b)
    {
        swap_a(stack_a);
        swap_b(stack_b);
    }
    write(1, "ss", 2);
    write(1, "\n", 1);
}
