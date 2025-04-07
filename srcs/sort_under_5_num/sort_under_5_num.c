/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_5_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:01:50 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/07 23:13:02 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int sort_2(t_stack_a *stack_a)
{
	int   temp;
	
	if (!stack_a->top || !stack_a->top->next)
		return (EXIT_FAILURE);
	temp = stack_a->top->next->number;
	if (stack_a->top->number < temp)
		return (EXIT_SUCCESS);
	if (stack_a->top->number > temp)
		return (swap_a(stack_a));
	return (EXIT_SUCCESS);
}  


int sort_3(t_stack_a *stack_a)
{
	t_node	*min;
	t_node	*max;
	t_node	*current;
	t_node	*next;
	t_node	*last;

	if (!stack_a || !stack_a->top || !stack_a->top->next || !stack_a->top->next->next)
		return (EXIT_FAILURE);
	find_min_max_nodes(stack_a, &min, &max);
	ft_printf("value of max: %d\n", max->number);
	ft_printf("value of min: %d\n", min->number);
	current = stack_a->top;
	next = current->next;
	last = next->next;
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

int	reset_nodes(t_stack_a *stack_a, t_node **current, t_node **next, t_node **last)
{
	*current = stack_a->top;
	*next = (*current)->next;
	*last = (*next)->next;
	return (EXIT_SUCCESS);
}
