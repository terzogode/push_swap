/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:11:27 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/22 21:20:58 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_max(t_node *stack)
{
	long	max;
	t_node	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->num > max)
		{
			max = stack->num;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_node	*find_min(t_node *stack)
{
	long	min;
	t_node	*min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	min_node = NULL;
	while (stack)
	{
		if (stack->num < min)
		{
			min = stack->num;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

t_node	*find_min_cost(t_node *stack)
{
	long	min;
	t_node	*smallest_cost;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->compr < min)
		{
			min = stack->compr;
			smallest_cost = stack;
		}
		stack = stack->next;
	}
	return (smallest_cost);
}

int	findaverage(t_node **stacka)
{
	t_node	*current;
	int		sum;
	int		counter;

	current = *stacka;
	sum = 0;
	counter = 0;
	while (current)
	{
		sum += current->num;
		counter++;
		current = current->next;
	}
	if (counter == 0)
		return (0);
	return (sum / counter);
}

int	len_stack(t_node **stack)
{
	t_node	*current;
	int		i;

	i = 0;
	current = *stack;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
