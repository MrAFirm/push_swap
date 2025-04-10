/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:07:34 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/11 21:56:51 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	find_min_max_nodes(t_stack_a *stack_a, t_node **min, t_node **max)
{
	t_node  *current;

	(*min) = stack_a->top;
	(*max) = stack_a->top;
	current = stack_a->top->next;

	while (current)
	{
		if (current->number < (*min)->number)
			(*min) = current;
		if (current->number > (*max)->number)
			(*max) = current;
		current = current->next;
		ft_printf("Biggest node value: %d\n", (*max)->number);
		ft_printf("Smallest node value: %d\n", (*min)->number);
	}
}

int stack_a_size(t_stack_a *stack_a)
{
	int count;

	count = 0;
	while (stack_a)
	{
		stack_a->top->number = stack_a->top->next->number;
		count++;
	}
	return (count);
}

int stack_b_size(t_stack_b *stack_b)
{
	int count;

	count = 0;
	while (stack_b)
	{
		stack_b->top->number = stack_b->top->next->number;
		count++;
	}
	return (count);
}

void	reset_nodes(t_stack_a *stack_a, t_value *var_value)
{
	var_value->a = stack_a->top->number;
	var_value->b = stack_a->top->next->number;
	var_value->c = stack_a->top->next->next->number;
}

void	push(t_stack_a *stack_a, t_stack_b *stack_b)
{
	t_node	*temp;
	
	temp = stack_a->top;
	stack_a->top = stack_a->top->next;
	temp->next = stack_b->top;
	stack_b->top = temp;
}