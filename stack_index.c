/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:23:15 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/24 16:21:26 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	up_pc(t_node *stack)
{
	int	pos;
	int	len;

	len = len_stack(&stack);
	pos = 0;
	while (stack != NULL)
	{
		stack->pos = pos;
		if (pos <= len / 2 + 1)
			stack->cost = pos;
		else
			stack->cost = len - pos;
		pos++;
		stack = stack->next;
	}
}

t_node	*find_nearest_num(t_node *stack_a, int numb)
{
	t_node	*current;
	t_node	*near;
	int		min_diff;
	int		diff;

	current = stack_a;
	near = NULL;
	min_diff = INT_MAX;
	while (current != NULL)
	{
		diff = current->num - numb;
		if (diff < 0)
			diff = -diff;
		if (diff < min_diff)
		{
			min_diff = diff;
			near = current;
		}
		current = current->next;
	}
	return (adjust_nearest_node(stack_a, near, numb));
}

t_node	*adjust_nearest_node(t_node *stack_a, t_node *near, int numb)
{
	if (near == NULL)
		return (NULL);
	if (near->num < numb)
	{
		if (near->next)
			return (near->next);
		return (stack_a);
	}
	return (near);
}

void	cost(t_node *st_a, t_node *st_b)
{
	t_node	*neara;

	while (st_b != NULL)
	{
		neara = find_nearest_num(st_a, st_b->num);
		st_b->compr = st_b->cost;
		if (neara != NULL)
			st_b->compr = st_b->cost + neara->cost;
		st_b = st_b->next;
	}
}
