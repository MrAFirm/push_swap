/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:28:39 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/21 17:47:44 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int main (int argc, char **argv)
{
    int         index;
    t_stack_a   stack_a;
    t_node      node;

    index = 0;
    if (argc <= 100)
    {
        while (argv != NULL)
        {
            stack_a_init(&stack_a);
            first_node((void *)(intptr_t)ft_atoi(argv[index]));
            node_add_back(&stack_a, &node);
        }
    }
}

void    stack_a_init(t_stack_a *stack_a)
{
    t_stack_a   *a_init;

    a_init = malloc(sizeof(t_stack_a));
    if (!a_init)
        return ;
    stack_a->top->number = NULL;
}

t_node  *first_node(void *value)
{
    t_node  *content;

    content = malloc(sizeof(t_node));
    content->next = malloc(sizeof(t_node));
    if (!content || !content->next)
        return (NULL);
    content->number = value;
    content->next->number = NULL;
    return (content);
}

t_node  *get_last_node(t_stack_a *stack_a)
{
    while (stack_a->top->next->number != NULL)
    {
        stack_a->top->number = stack_a->top->next->number;
    }
    return (stack_a->top);
}

void    *node_add_back(t_stack_a *stack_a, t_node *new)
{
    t_node  *last;

    last = malloc(sizeof(t_node));
    if (!last)
        return (NULL);
    if (stack_a && new)
    {
        if(!stack_a)
            stack_a->top->number = new;
        else
        {
            last = get_last_node(stack_a);
            stack_a->top->next->number = last;
        }
    }
    return (EXIT_SUCCESS);
}
