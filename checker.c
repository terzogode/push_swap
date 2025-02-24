/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:08:59 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/22 20:28:48 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	number;

	number = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	return (number * sign);
}

int	checker(t_node **stack, long num)
{
	if (num > INT_MAX || num < INT_MIN)
	{
		ft_free_stack(stack);
		write (2, "Error\n", 6);
		return (1);
	}
	if (check_dup(stack, num) == 1)
		return (1);
	return (0);
}

int	check_dup(t_node **stack, long num)
{
	t_node	*current;

	current = *stack;
	while (current != NULL)
	{
		if (current->num == num)
		{
			ft_free_stack(stack);
			write (2, "Error\n", 6);
			return (1);
		}
		current = current->next;
	}
	return (0);
}

int	checknum(char *argv, t_node **stack)
{
	int	i;

	i = 0;
	if (ft_strlen(argv) == 0)
		return (1);
	if (argv[0] == '-' || argv[0] == '+')
		i++;
	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
		{
			write (2, "Error\n", 6);
			ft_free_stack(stack);
			return (1);
		}
		i++;
	}
	if ((argv[0] == '-' && (argv[1] < '0' || argv[i] > '9'))
		|| (argv[0] == '+' && (argv[1] < '0' || argv[i] > '9')))
	{
		ft_free_stack(stack);
		write (2, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i == 0)
		write (2, "Error\n", 6);
	return (i);
}
