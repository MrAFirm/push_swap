/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:25:18 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/03 18:12:11 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int swap_a(t_stack_a *stack_a)
{
	t_node	*first;
	t_node	*second;
	
	if (!stack_a || !stack_a->top || !stack_a->top->next)
		return (EXIT_FAILURE);
	first = stack_a->top;
	second = first->next;

	first->next = second->next;
	second->next = first;
	stack_a->top = second;
	
	write(1, "sa", 2);
	write(1, "\n", 1);
	return (EXIT_SUCCESS);
}
