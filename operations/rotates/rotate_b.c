/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:58:44 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/03 18:05:35 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_b(t_stack_b *stack_b)
{
	t_node	*first;
	t_node	*last;

	if (!stack_b || !stack_b->top || !stack_b->top->next)
	{
		return ;
	}
	first = stack_b->top;
	stack_b->top = first->next;
	last = stack_b->top;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "rb", 2);
}
