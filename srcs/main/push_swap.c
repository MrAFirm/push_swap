/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:28:39 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/19 22:20:55 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int main (int argc, char **argv)
{
    int         index;
    t_stack_a   stack_a;
    t_node      node;

    index = 0;
    while (argv != NULL)
    {
        stack_a_init(&stack_a);
        first_node(&stack_a);
        node_add_back(&stack_a, &node);
    }
}

void    stack_a_init(t_stack_a *stack_a)
{
    t_stack_a   *a_init;

    a_init = malloc(sizeof(t_stack_a));
    if (!a_init)
        return ;
    stack_a->top = NULL;
}

t_node  *first_node(int value)
{
    t_node  *content;

    content = malloc(sizeof(t_node));
    if (!content)
        return ;
    content->number = value;
    content->next_num = NULL;
    return (content);
}

t_node  *get_last_node(t_stack_a *stack_a)
{
    while (stack_a->top->next_num != NULL)
    {
        stack_a = stack_a->top->next_num;
    }
    return (stack_a);
}

void    *node_add_back(t_stack_a *stack_a, t_node *new)
{
    t_node  *last;

    last = malloc(sizeof(t_node));
    if (!last)
        return ;
    if (stack_a && new)
    {
        if(!stack_a)
            stack_a = new;
        else
        {
            last = get_last_node(stack_a);
            stack_a->top->next_num = last;
        }
    }
}