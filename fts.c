/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:45:43 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/22 21:46:04 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tfs(t_node **stacka, t_node **stackb)
{
	int		lena;
	t_node	*current;
	t_node	*max;
	int		average;

	max = find_max(*stacka);
	lena = len_stack(stacka);
	average = findaverage(stacka);
	while (lena > 3)
	{
		current = *stacka;
		if (current->num == max->num)
		{
			ft_rotate(stacka, true, true);
			continue ;
		}
		ft_push(stacka, stackb, false);
		lena = len_stack(stacka);
		if (current->num >= average)
			ft_rotate(stackb, false, true);
	}
	sort_three(stacka);
	mega_zord(stacka, stackb);
}

void	mega_zord(t_node **stacka, t_node **stackb)
{
	t_node	*cheap;
	int		la;
	int		lb;
	t_node	*neara;

	lb = len_stack(stackb);
	while (lb > 1)
	{
		lb = len_stack(stackb);
		la = len_stack(stacka);
		cost(*stacka, *stackb);
		cheap = find_min_cost(*stackb);
		neara = find_nearest_num(*stacka, cheap->num);
		if (neara->pos <= la / 2 + 1 && cheap->pos <= lb / 2 + 1)
			flipone(stacka, stackb, cheap, neara);
		else if (!(neara->pos <= la / 2 + 1) && !(cheap->pos <= lb / 2 + 1))
			fliptwo(stacka, stackb, cheap, neara);
		else
			flipjolly(stacka, stackb, cheap, neara);
		ft_push(stackb, stacka, true);
	}
}

void	flipone(t_node **st_a, t_node **st_b, t_node *cheap, t_node *neara)
{
	while (neara->pos != 0 && cheap->pos != 0)
		ft_rotate_both(st_a, st_b);
	flipjolly(st_a, st_b, cheap, neara);
}

void	fliptwo(t_node **st_a, t_node **st_b, t_node *cheap, t_node *neara)
{
	while (neara->pos != 0 && cheap->pos != 0)
		ft_rev_rot_both(st_a, st_b);
	flipjolly(st_a, st_b, cheap, neara);
}

void	flipjolly(t_node **st_a, t_node **st_b, t_node *cheap, t_node *neara)
{
	int		la;
	int		lb;

	lb = len_stack(st_b);
	la = len_stack(st_a);
	while (neara->pos != 0)
	{
		if (neara->pos <= la / 2 + 1)
			ft_rotate(st_a, true, true);
		else
			ft_rev_rot(st_a, true, true);
	}
	while (cheap->pos != 0)
	{
		if (cheap->pos <= lb / 2 + 1)
			ft_rotate(st_b, false, true);
		else
			ft_rev_rot(st_b, false, true);
	}
}
