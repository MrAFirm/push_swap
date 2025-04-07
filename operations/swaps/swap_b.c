/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:01:29 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/03 18:14:36 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int swap_b(t_stack_b *stack_b)
{
	t_node	*first;
	t_node	*second;
	
	if (!stack_b || !stack_b->top || !stack_b->top->next)
		return (EXIT_FAILURE);
	first = stack_b->top;
	second = first->next;

	first->next = second->next;
	second->next = first;
	stack_b->top = second;
	
	write(1, "sb", 2);
	write(1, "\n", 1);
	return (EXIT_SUCCESS);
}
