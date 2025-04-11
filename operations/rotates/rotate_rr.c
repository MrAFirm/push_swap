/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:58:59 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/21 18:38:57 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int rotate_rr(t_stack_a *stack_a, t_stack_b *stack_b)
{
    if (stack_a && stack_b)
    {
        rotate_a(stack_a);
        rotate_b(stack_b);
    }
    write(1, "rr", 2);
    return (EXIT_SUCCESS);
}
