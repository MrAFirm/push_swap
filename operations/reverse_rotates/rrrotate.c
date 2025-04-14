/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrrotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:49:58 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/07 19:50:00 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    rrrotate(t_stack_a *stack_a, t_stack_b *stack_b)
{
    if (stack_a && stack_b)
    {
        rrotate_a(stack_a);
        rrotate_b(stack_b);
    }
    write(1, "rrr", 3);
}
