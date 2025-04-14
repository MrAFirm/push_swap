/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:19:20 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/03 15:39:38 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void    push_b(t_stack_a *stack_a, t_stack_b *stack_b)
{
	t_node	*temp;
	
    if (!stack_a || !stack_a->top || !stack_a->top->next)
	{
		return ;
	}
	temp = stack_b->top;
	stack_b->top = stack_b->top->next;
	temp->next = stack_a->top;
	stack_a->top = temp;
    write(1, "pa", 2);
	write(1, "\n", 1);
}
