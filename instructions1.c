/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslaoui <sslaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 01:15:24 by sslaoui           #+#    #+#             */
/*   Updated: 2024/03/14 15:31:33 by sslaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **stack_a)
{
	t_stack *tmp;
	t_stack *ptr;

	tmp = *stack_a;
	ptr = (*stack_a)->next;
	while (tmp->next)
		tmp = tmp->next;
	(*stack_a)->next = NULL;
	tmp->next = *stack_a;
	*stack_a = ptr;
	write(1, "ra\n", 3);
}

void	rotate_b(t_stack **stack_b)
{
	t_stack *tmp;
	t_stack *ptr;

	tmp = *stack_b;
	ptr = (*stack_b)->next;
	while (tmp->next)
		tmp = tmp->next;
	(*stack_b)->next = NULL;
	tmp->next = *stack_b;
	*stack_b = ptr;
	write(1, "rb\n", 3);
}

void	rotate_a_b(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
	write(1, "rr\n", 3);
}

void	rotate_reverse_a(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack *ptr;

	if (!(*stack_a)->next)
		return ;
	tmp = *stack_a;
	ptr = *stack_a;
	while (ptr->next->next)
		ptr = ptr->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack_a;
	ptr->next = NULL;
	*stack_a = tmp;
}

void	rotate_reverse_b(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack *ptr;

	if (!(*stack_b)->next)
		return ;
	tmp = *stack_b;
	ptr = *stack_b;
	while (ptr->next->next)
		ptr = ptr->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = *stack_b;
	ptr->next = NULL;
	*stack_b = tmp;
}

void	rotate_reverse_a_b(t_stack **stack_a, t_stack **stack_b)
{
	rotate_reverse_a(stack_a);
	rotate_reverse_b(stack_b);
	write(1, "rrr\n", 4);
}