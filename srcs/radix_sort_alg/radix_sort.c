#include "../../includes/push_swap.h"

void	bubble_sort(int *arr, int index, int length)
{
	int	j;
	int	tmp;

	tmp = 0;
	while (index < length)
	{
		j = 0;
		while (j < length - 1 - index)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		index++;
	}
}

void	sort_indexing(t_stack_a *stack_a)
{
	int		stack_size;
	int		*arr;
	int		index;
	int		length;
	t_node	*temp;

	if (!stack_a || !stack_a->top || !stack_a->top->next)
		return ;
	stack_size = stack_a_size(stack_a);
	arr = malloc(sizeof(int) * stack_size);
	if (!arr)
		return ;
	temp = stack_a->top;
	length = 0;
	while (temp)
	{
		arr[length] = temp->number;
		temp = temp->next;
		length++;
	}
	index = 0;
	bubble_sort(arr, index, length);
	temp = stack_a->top;
	while (temp)
	{
		index = 0;
		while (index < length)
		{
			if (arr[index] == temp->number)
			{
				temp->index = index;
				break;
			}
			index++;
		}
		temp = temp->next;
	}
}

void	radix_sort(t_stack_a *stack_a, t_stack_b *stack_b)
{
	int	index;
	int	max_bits;
	int	stack_size;
	int	max_index;
	int	bit_pos;
	int	movecount;

	index = 0;
	max_bits = 0;
	sort_indexing(stack_a);
	stack_size = stack_a_size(stack_a);
	if (stack_size <= 0)
		return ;
	max_index = stack_size - 1;
	movecount = 0;
	bit_pos = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	stack_size = stack_a_size(stack_a);
	while (bit_pos < max_bits)
	{
		index = 0;
		while (index < stack_size)
		{
			if (((stack_a->top->index >> bit_pos) & 1) == 0)
			{
				push_b(stack_a, stack_b);
				movecount++;
			}
			else
			{
				rotate_a(stack_a);
				movecount++;
			}
			index++;
		}
		while (stack_b->top)
		{
			push_a(stack_a, stack_b);
			movecount++;
		}
		bit_pos++;
	}
	// ft_printf("Total movecount: %d\n", movecount);
}
