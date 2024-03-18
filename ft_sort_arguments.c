/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arguments.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslaoui <sslaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:30:41 by sslaoui           #+#    #+#             */
/*   Updated: 2024/03/18 00:28:39 by sslaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack *ptr;

	tmp = *stack_a;
	ptr = *stack_a;
	ptr = ptr->next->next;
		if (tmp->content > tmp->next->content && tmp->content > ptr->content)
		{
			if (tmp->next->content > ptr->content)
			{
				rotate_a(stack_a);
				swap_a(stack_a);
			}
			else if (tmp->next->content < ptr->content)
				rotate_a(stack_a);
		}
		else if (tmp->next->content > tmp->content && tmp->next->content > ptr->content)
			ft_sort_three1(stack_a);
		else if (ptr->content > tmp->next->content && ptr->content > tmp->content)
		{
			if (tmp->content > tmp->next->content)
				swap_a(stack_a);
		}
}
void	ft_sort_three1(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*ptr;

	tmp = *stack_a;
	ptr = *stack_a;
	ptr = ptr->next->next;
	if (ptr->content > tmp->content)
	{
		rotate_reverse_a(stack_a);
		swap_a(stack_a);
	}
	else if (tmp->content > ptr->content)
		rotate_reverse_a(stack_a);
}

void	ft_sort_two(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = *stack_a;
	tmp = tmp->next;
	if ((*stack_a)->content > tmp->content)
		swap_a(stack_a);
}

void	ft_find_pos_a_b(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	j;
	t_stack	*tmp;
	t_stack *ptr;

	i = 0;
	j = 0;
	tmp = *stack_a;
	ptr = *stack_b;
	while (ptr)
	{
		ptr->pos = j;
		ptr = ptr->next;
		j++;
	}
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

void	ft_target_a_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;
	t_stack	*ptr;
	t_stack *lp;

	lp = *stack_b;
	ptr = *stack_a;
	if (lp)
	{
		while (ptr)
		{
			if (ptr ->content < lp->content)
				tmp = ptr;
			if (tmp->content < ptr->next->content)
				{
					ptr = ptr->next;
					// tmp = ptr;
				}
			ptr = ptr->next;
		}
		lp->target_pos = tmp->pos;
	}
}