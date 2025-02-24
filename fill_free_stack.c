/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_free_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:48:14 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/20 16:51:21 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fillstack(t_node **top, int newnum)
{
	t_node	*new_node;
	t_node	*current;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return ;
	new_node->num = newnum;
	new_node->next = NULL;
	if (*top == NULL)
		*top = new_node;
	else
	{
		current = *top;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
}

void	ft_free_stack(t_node **stack)
{
	t_node	*current;
	t_node	*temp;

	current = *stack;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
