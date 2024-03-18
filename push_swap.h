/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslaoui <sslaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:30:43 by sslaoui           #+#    #+#             */
/*   Updated: 2024/03/17 11:39:59 by sslaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
	int	content;
	int	index;
	int	pos;
	int	target_pos;
	int	cost_a;
	int	cost_b;
	struct s_stack *next;
}	t_stack;

// typedef	struct s_list
// {
// 	void	*content;
// 	struct s_list	*next;
// }	t_list;

void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	swap_a(t_stack **stack_a);
void	swap_b(t_stack **stack_b);
void	swap_a_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_a(t_stack **stack_a);
void	rotate_b(t_stack **stack_b);
void	rotate_a_b(t_stack **stack_a, t_stack **stack_b);
void	rotate_reverse_a(t_stack **stack_a);
void	rotate_reverse_b(t_stack **stack_b);
void	rotate_reverse_a_b(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_lstnew(void *content);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
char	**check_d(char **arg, int i);
char	**check_arg(char **arg);
char	**split_arg(char *arg);
char	*ftt_strchr(const char *s, int c);
void	ft_free(char **res);
int		ft_skip_and_lenght(char const *s, unsigned int *index, char c);
char	**ft_allocate(char **res, char const *s, unsigned int j, char c);
char	**ft_split(char const *s, char c);
void	ft_sort_three(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_three1(t_stack **stack_a);
void	ft_sort_two(t_stack **stack_a);
void	ft_find_pos_a_b(t_stack **stack_a, t_stack **stack_b);
void	ft_target_a_b(t_stack **stack_a, t_stack **stack_b);

#endif