/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslaoui <sslaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:07:59 by sslaoui           #+#    #+#             */
/*   Updated: 2024/03/14 00:55:38 by sslaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;

	tmp = malloc(sizeof(t_stack));
	if (!tmp)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	free(tmp);
	write(1, "pa\n", 3);
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;

	tmp = malloc(sizeof(t_stack));
	if (!tmp)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	free(tmp);
	write(1, "pb\n", 3);
}

void	swap_a(t_stack **stack_a)
{
	t_stack *tmp;
	
	if (!(*stack_a)->next)
		return ;
	tmp = malloc(sizeof(t_stack));
	if (!tmp)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	free(tmp);
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **stack_b)
{
	t_stack *tmp;

	if(!(*stack_b)->next)
		return ;
	tmp = malloc(sizeof(t_stack));
	if (!tmp)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	free(tmp);
	write(1, "sb\n", 3);
}

void	swap_a_b(t_stack **stack_a, t_stack **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	write(1, "ss\n", 3);
}