/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:07:34 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/21 21:48:02 by lkhye-ya         ###   ########.fr       */
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
	}
}

int stack_a_size(t_stack_a *stack_a)
{
	int		count;
	t_node	*temp;

	if (!stack_a || !stack_a->top)
		return (EXIT_FAILURE);
	count = 0;
	temp = stack_a->top;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

int stack_b_size(t_stack_b *stack_b)
{
	int 	count;
	t_node	*temp;

	if (!stack_b || !stack_b->top)
		return (EXIT_FAILURE);
	count = 0;
	temp = stack_b->top;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}


void	move_min_to_top_5(t_stack_a *stack_a)
{
	t_node	*min;
	t_node	*max;
	
	if (!stack_a || !stack_a->top || !stack_a->top->next || !stack_a->top->next->next || !stack_a->top->next->next->next || !stack_a->top->next->next->next->next)
	return ;
	find_min_max_nodes(stack_a, &min, &max);
	if (stack_a->top->next->number == min->number)
	swap_a(stack_a);
	if (stack_a->top->next->next->number == min->number)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	if (stack_a->top->next->next->next->number == min->number)
	{
		rrotate_a(stack_a);
		rrotate_a(stack_a);
	}
	if (stack_a->top->next->next->next->next->number == min->number)
	rrotate_a(stack_a);
}

void	move_min_to_top_4(t_stack_a *stack_a)
{
	t_node	*min;
	t_node	*max;
	
	if (!stack_a || !stack_a->top || !stack_a->top->next || !stack_a->top->next->next || !stack_a->top->next->next->next)
	return ;
	find_min_max_nodes(stack_a, &min, &max);
	if (stack_a->top->next->number == min->number)
	swap_a(stack_a);
	if (stack_a->top->next->next->number == min->number)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	if (stack_a->top->next->next->next->number == min->number)
	rrotate_a(stack_a);
}

/*
void	reset_nodes(t_stack_a *stack_a, t_value *var_value)
{
	var_value->a = stack_a->top->number;
	var_value->b = stack_a->top->next->number;
	var_value->c = stack_a->top->next->next->number;
	var_value->d = stack_a->top->next->next->next->number;
	var_value->e = stack_a->top->next->next->next->next->number;
}
*/