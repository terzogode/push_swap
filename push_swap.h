/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrighi <mbrighi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:35:24 by mbrighi           #+#    #+#             */
/*   Updated: 2025/02/24 16:29:10 by mbrighi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	long			num;
	int				pos;
	int				cost;
	int				compr;
	struct s_node	*next;
}	t_node;

//Checker
int		checker(t_node **stack, long num);
int		check_dup(t_node **stack, long num);
int		checknum(char *argv, t_node **stack);
int		ft_strlen(char *str);
long	ft_atoi(const char *nptr);

//Fill and free stack
void	fillstack(t_node **top, int newnum);
void	ft_free_stack(t_node **stack);

//Subject moves (ft_swap[3] ft_rotate[4])
void	ft_push(t_node **s_1, t_node **s_2, bool into_a);
void	ft_swap(t_node *head, bool is_a, bool letswrite);
void	ft_swap_both(t_node *head, t_node *head1);
void	ft_rotate(t_node **stack, bool is_a, bool letswrite);
void	ft_rotate_both(t_node **stacka, t_node **stackb);
void	ft_rev_rot(t_node **stack, bool is_a, bool letswrite);
void	ft_rev_rot_both(t_node **stacka, t_node **stackb);

//min_sort
void	letsgoski(t_node **stacka, t_node **stackb);
void	sort_three(t_node **stack);
void	sort_min(t_node **stacka, t_node **stackb);
void	lastsorting(t_node **stacka);

//push utils1
t_node	*find_max(t_node *stack);
t_node	*find_min(t_node *stack);
t_node	*find_min_cost(t_node *stack);
int		findaverage(t_node **stacka);
int		len_stack(t_node **stack);

//push_main
int		sorted_stack(t_node *stack);

//stack_index
void	up_pc(t_node *stack);
t_node	*adjust_nearest_node(t_node *stack_a, t_node *near, int numb);
t_node	*find_nearest_num(t_node *stack_a, int numb);
void	cost(t_node *st_a, t_node *st_b);

//tfs
void	tfs(t_node **stacka, t_node **stackb);
void	mega_zord(t_node **stacka, t_node **stackb);
void	flipone(t_node **st_a, t_node **st_b, t_node *cheap, t_node *neara);
void	fliptwo(t_node **st_a, t_node **st_b, t_node *cheap, t_node *neara);
void	flipjolly(t_node **st_a, t_node **st_b, t_node *cheap, t_node *neara);

#endif