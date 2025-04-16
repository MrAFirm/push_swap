/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:01:50 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/16 22:24:15 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_2(t_stack_a *stack_a, t_value *var_value)
{
	if (!stack_a || !stack_a->top || !stack_a->top->next)
		return ; 
	var_value->a = stack_a->top->number;
	var_value->b = stack_a->top->next->number;
	if (var_value->a > var_value->b)
		swap_a(stack_a);
	if (var_value->a < var_value->b)
		return ;
}  


void	sort_3(t_stack_a *stack_a, t_value *var_value)
{
	if (!stack_a || !stack_a->top || !stack_a->top->next || !stack_a->top->next->next)
		return ;
	var_value->a = stack_a->top->number;
	var_value->b = stack_a->top->next->number;
	var_value->c = stack_a->top->next->next->number;
	if (var_value->a > var_value->b && var_value->b < var_value->c && var_value->a < var_value->c)
		swap_a(stack_a);
	if (var_value->a < var_value->b && var_value->b > var_value->c && var_value->a > var_value->c)
		rrotate_a(stack_a);
	if (var_value->a < var_value->b && var_value->b < var_value->c && var_value->a < var_value->c)
		return ;
	if (var_value->a < var_value->b && var_value->b > var_value->c && var_value->a < var_value->c)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	if (var_value->a > var_value->b && var_value->b < var_value->c && var_value->a > var_value->c)
		rotate_a(stack_a);
	if (var_value->a > var_value->b && var_value->b > var_value->c && var_value->a > var_value->c)
	{
		rotate_a(stack_a);
		swap_a(stack_a);
	}
}

void	sort_4(t_stack_a *stack_a, t_stack_b *stack_b, t_value *var_value)
{
	t_node	*min;
	t_node	*max;
	if (!stack_a || !stack_a->top || !stack_a->top->next || !stack_a->top->next->next || !stack_a->top->next->next->next)
		return ;
	var_value->a = stack_a->top->number;
	var_value->b = stack_a->top->next->number;
	var_value->c = stack_a->top->next->next->number;
	var_value->d = stack_a->top->next->next->next->number;
	find_min_max_nodes(stack_a, &min, &max);
	if (var_value->a < var_value->b && var_value->b < var_value->c && var_value->c < var_value->d && var_value->a < var_value->d)
		return ;
	if (var_value->b == min->number)
		swap_a(stack_a);
	if (var_value->c == min->number)
	{
		rrotate_a(stack_a);
		rrotate_a(stack_a);
	}
	if (var_value->d == min->number)
		rrotate_a(stack_a);
	push_b(stack_a, stack_b);
	sort_3(stack_a, var_value);
	push_a(stack_a, stack_b);
}

void	sort_5(t_stack_a *stack_a, t_stack_b *stack_b, t_value *var_value)
{
	if (!stack_a || !stack_a->top || !stack_a->top->next || !stack_a->top->next->next || !stack_a->top->next->next->next || !stack_a->top->next->next->next->next)
		return ;
	var_value->a = stack_a->top->number;
	var_value->b = stack_a->top->next->number;
	var_value->c = stack_a->top->next->next->number;
	var_value->d = stack_a->top->next->next->next->number;
	var_value->e = stack_a->top->next->next->next->next->number;
	if (var_value->a < var_value->b && var_value->b < var_value->c && var_value->c < var_value->d && var_value->d < var_value->e && var_value->a < var_value->e)
		return ;
	move_min_to_top_5(stack_a);
	push_b(stack_a, stack_b);
	move_min_to_top_4(stack_a);
	push_b(stack_a, stack_b);
	sort_3(stack_a, var_value);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
}
/*
int sort_3(t_stack_a *stack_a)
{
	t_node	*min;
	t_node	*max;
	t_node	*current;
	t_node	*next;
	t_node	*last;

	current = stack_a->top;
	next = current->next;
	last = next->next;
	if (!stack_a || !stack_a->top || !stack_a->top->next || !stack_a->top->next->next)
		return (EXIT_FAILURE);
	find_min_max_nodes(stack_a, &min, &max);
	if (current->number == max->number && next->number == min->number)
		rotate_a(stack_a);
	reset_nodes(stack_a, &current, &next, &last);
	if (current->number == min->number && current->next)
		current = current->next;
	if (current->number == min->number && last->number == max->number)
		return (EXIT_SUCCESS);
	if (current->number > next->number && current->number < max->number)
		swap_a(stack_a);
	reset_nodes(stack_a, &current, &next, &last);
	if (current->number == max->number && next->number != min->number)
	{
			rotate_a(stack_a);
			swap_a(stack_a);
		}
		reset_nodes(stack_a, &current, &next, &last);
		if (current->number == min->number && next->number == max->number)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	reset_nodes(stack_a, &current, &next, &last);
	if (current->number != min->number && next->number == max->number)
		rrotate_a(stack_a);
	reset_nodes(stack_a, &current, &next, &last);
	return (EXIT_SUCCESS);
}
*/