/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:15:41 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/20 16:51:21 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_node **stack, bool is_a, bool letswrite)
{
	t_node	*first;
	t_node	*last;

	first = *stack;
	last = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	*stack = first->next;
	first->next = NULL;
	if (letswrite && is_a)
		write (1, "ra\n", 3);
	else if (letswrite)
		write (1, "rb\n", 3);
	up_pc(*stack);
}

void	ft_rotate_both(t_node **stacka, t_node **stackb)
{
	ft_rotate(stacka, false, false);
	ft_rotate(stackb, false, false);
	write (1, "rr\n", 3);
}

void	ft_rev_rot(t_node **stack, bool is_a, bool letswrite)
{
	t_node	*seclast;
	t_node	*last;

	seclast = NULL;
	last = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		seclast = last;
		last = last->next;
	}
	last->next = *stack;
	seclast->next = NULL;
	*stack = last;
	if (letswrite && is_a)
		write (1, "rra\n", 4);
	else if (letswrite)
		write (1, "rrb\n", 4);
	up_pc(*stack);
}

void	ft_rev_rot_both(t_node **stacka, t_node **stackb)
{
	ft_rev_rot(stacka, false, false);
	ft_rev_rot(stackb, false, false);
	write (1, "rrr\n", 4);
}
