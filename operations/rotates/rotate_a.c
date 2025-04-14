/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 21:58:22 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/03 18:05:15 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_a(t_stack_a *stack_a)
{
	t_node	*first;
	t_node	*last;

	if (!stack_a || !stack_a->top || !stack_a->top->next)
	{
		return ;
	}
	first = stack_a->top;
	stack_a->top = first->next;
	last = stack_a->top;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
	write(1, "ra", 2);
	write(1, "\n", 1);
}
