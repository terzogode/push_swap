/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 19:57:53 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/22 20:55:21 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_node **s_1, t_node **s_2, bool into_a)
{
	t_node	*temp;

	if (*s_1 == NULL)
		return ;
	temp = *s_1;
	*s_1 = (*s_1)->next;
	temp->next = *s_2;
	*s_2 = temp;
	if (into_a)
		write (1, "pa\n", 3);
	else
		write (1, "pb\n", 3);
	if (*s_2 != NULL)
		up_pc(*s_2);
	up_pc(*s_1);
}

void	ft_swap(t_node *head, bool is_a, bool letswrite)
{
	int	temp;

	up_pc(head);
	if (head == NULL || head->next == NULL)
		return ;
	temp = head->num;
	head->num = head->next->num;
	head->next->num = temp;
	if (letswrite && is_a)
		write (1, "sa\n", 3);
	else if (letswrite && !is_a)
		write (1, "sb\n", 3);
	up_pc(head);
}

void	ft_swap_both(t_node *head, t_node *head1)
{
	ft_swap(head, true, false);
	ft_swap(head1, false, false);
	write (1, "ss\n", 3);
}
