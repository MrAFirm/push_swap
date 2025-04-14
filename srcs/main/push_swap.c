/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 21:28:39 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/04/14 23:13:26 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int main (int argc, char **argv)
{
    int         index;
    t_stack_a   *stack_a;
    t_stack_b   *stack_b;
    t_value     *var_value;
    t_node      *cur;
    int         num;

    index = 1;
    var_value = malloc(sizeof(t_value));
    if (!var_value)
        return (EXIT_FAILURE);
    if (argc > 1 && argc <= 100)
    {
        stack_a = stack_a_init();
        while (index < argc)
        {
            num = ft_atoi(argv[index]);
            node_add_back_a(stack_a, num);
            cur = stack_a->top;
            index++;
            int i = 1;
            while (cur)
            {
                ft_printf("I'm here\n");
                ft_printf("Node %d value: %d, addr: %p\n", i++, cur->number, (void *)cur);
                cur = cur->next;
            }
        }
    }
    stack_b = stack_b_init();
    node_add_back_b(stack_b, num);
    if (!argv[3])
        sort_2(stack_a, var_value);
    if (!argv[4])
        sort_3(stack_a, var_value);
    if (!argv[5])
        sort_4(stack_a, stack_b, var_value);
    if (!argv[6])
        sort_5(stack_a, stack_b, var_value);
    return (0);
}

t_stack_a    *stack_a_init(void)
{
    t_stack_a   *stack_a;
    stack_a = malloc(sizeof(t_stack_a));
    if (!stack_a)
        return (NULL);
    stack_a->top = NULL;
    ft_printf("Stack initialized at: %p\n", (void *)stack_a);
    return (stack_a);
}

t_node  *new_node(int value)
{
    t_node  *content;

    content = malloc(sizeof(t_node));
    if (!content)
        return (NULL);
    content->number = value;
    content->next = NULL;
    ft_printf("New node value: %d\n", content->number);
    return (content);
}

t_node  *get_last_node_a(t_stack_a *stack_a)
{
    t_node      *current;

    if (!stack_a || !stack_a->top)
        return (NULL);
    current = stack_a->top;
    while (current->next)
        current = current->next;
    return (current);
}

int node_add_back_a(t_stack_a *stack_a, int value)
{
    t_node  *last;
    t_node  *new;

    new = new_node(value);
    if (!new)
        return (EXIT_FAILURE);
    new->next = NULL;
    if (stack_a && new)
    {
        if(!stack_a->top)
        {
            stack_a->top = new;
            ft_printf("First node address: %p\n", (void *)stack_a->top);
        }
        else
        {
            last = get_last_node_a(stack_a);
            ft_printf("Last node address: %p\n", (void *)last);
            if (last)
                last->next = new;
            ft_printf("Last node->next: %p\n", (void *)last->next);
        }
    }
    return (EXIT_SUCCESS);
}


// void    free_nodes(t_stack_a *stack_a, t_node *node)
// {
//     if (stack_a)
//         free(stack_a);
//     if(node->next)
//         free(node->next);
//     free(node);
// }
