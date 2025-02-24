/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:35:18 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/22 21:02:06 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted_stack(t_node *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		i;
	long	num;
	t_node	*stacka;
	t_node	*stackb;

	stacka = NULL;
	stackb = NULL;
	i = 1;
	while (i < argc)
	{
		if (checknum(argv[i], &stacka) == 1)
			return (127);
		num = ft_atoi(argv[i]);
		if (checker(&stacka, num) == 1)
			return (155);
		else
			fillstack(&stacka, num);
		i++;
	}
	if (sorted_stack(stacka) == 0)
		letsgoski(&stacka, &stackb);
	ft_free_stack(&stacka);
	ft_free_stack(&stackb);
}

// int	main(int argc, char **argv)
// {
// 	int		i;
// 	long	num;
// 	t_node	*stacka;
// 	t_node*current;
// 	t_node	*stackb;

// 	stacka = NULL;
// 	stackb = NULL;
// 	i = 1;
// 	while (i < argc)
// 	{
// 		if (checknum(argv[i], &stacka) == 1)
// 			return (127);
// 		num = ft_atoi(argv[i]);
// 		if (checker(&stacka, num) == 1)
// 			return (155);
// 		else
// 			fillstack(&stacka, num);
// 		i++;
// 	}
// 	if (sorted_stack(stacka) == 0)
// 		letsgoski(&stacka, &stackb);
//    current = stacka;
// 	printf("stack a:\n");
// 	while (current != NULL)
// 	{
// 		printf("[%d]  %ld  [%u]  %d\n", current->pos, 
//current->num, current->cost, current->compr);
// 		current = current->next;
// 	}
// 	printf("\n");

// 	current = stackb;
// 	printf("stack b:\n");
// 	while (current != NULL)
// 	{
// 		printf("[%d]  %ld  [%u]  %d\n", current->pos, 
//current->num, current->cost, current->compr);
// 		current = current->next;
// 	}
// 	printf("\n");
// 	ft_free_stack(&stacka);
// 	ft_free_stack(&stackb);
// }