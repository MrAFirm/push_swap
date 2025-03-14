/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:49:27 by lkhye-ya          #+#    #+#             */
/*   Updated: 2025/03/11 16:17:04 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int main(int argc, char **argv)
{
    t_stack_a   *stack_a;
    t_node      *node;
    int         index;
    int         result;

    
    index = 0;
    if (argc != 2)
    {
        ft_printf("Error: Invalid Argument Count.\n");
    }
    while (argv[1][index])
    {
        result = ft_atoi(argv[1][index]);
        ft_lstnew((void *)argv[1][index]);
        ft_lstadd_back(stack_a, stack_a->top);
        index++;
    }
}