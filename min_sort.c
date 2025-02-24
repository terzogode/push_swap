/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:11:33 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/22 20:11:08 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	letsgoski(t_node **stacka, t_node **stackb)
{
	up_pc(*stacka);
	if (len_stack(stacka) <= 3)
		sort_three(stacka);
	if (len_stack(stacka) > 3 && len_stack(stacka) < 7)
		sort_min(stacka, stackb);
	if (len_stack(stacka) > 6)
	{
		tfs(stacka, stackb);
		lastsorting(stacka);
	}
}

void	sort_three(t_node **stack)
{
	t_node	*biggest;

	biggest = find_max(*stack);
	if (biggest == *stack)
		ft_rotate(stack, true, true);
	else if ((*stack)->next == biggest)
		ft_rev_rot(stack, true, true);
	if ((*stack)->num > (*stack)->next->num)
		ft_swap(*stack, true, true);
	up_pc(*stack);
}

void	sort_min(t_node **stacka, t_node **stackb)
{
	t_node	*smallest;

	up_pc(*stacka);
	while (len_stack(stacka) > 3)
	{
		smallest = find_min(*stacka);
		while ((smallest)->pos != 0)
		{
			if ((smallest)->pos <= len_stack(stacka) / 2)
				ft_rotate(stacka, true, true);
			else
				ft_rev_rot(stacka, true, true);
			smallest = find_min(*stacka);
			up_pc(*stacka);
		}
		ft_push(stacka, stackb, false);
		up_pc(*stacka);
	}
	sort_three(stacka);
	while (*stackb != NULL)
	{
		ft_push(stackb, stacka, true);
		up_pc(*stacka);
	}
}

void	lastsorting(t_node **stacka)
{
	int	lena;

	lena = len_stack(stacka);
	while (find_min(*stacka)->pos != 0)
	{
		if (find_min(*stacka)->pos <= lena / 2)
			ft_rotate(stacka, true, true);
		else
			ft_rev_rot(stacka, true, true);
	}
}
