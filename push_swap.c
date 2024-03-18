/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslaoui <sslaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 06:29:45 by sslaoui           #+#    #+#             */
/*   Updated: 2024/03/17 18:15:53 by sslaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <libc.h>

int fatoi(char *string)
{
	int index = 0;
	int minis = 1;
	int store = 0;

	while (string[index] == ' ' || (string[index] >= 9 && string[index] <= 13))
		index++ ;
	if (string[index] && (string[index] == '-' || string[index] == '+'))
	{
		if (string[index] == '-')
			minis *= -1 ;
		index++ ;
	}
	while (string[index] && string[index] >= '0' && string[index] <= '9')
	{
		store = (store * 10 ) + string[index] - '0';
		index++ ;
	}
	return (store * minis);
}
void	print_list(t_stack *stack_a)
{
	while(stack_a->content)
	{
		printf("%d", stack_a->content);
		stack_a = stack_a->next;
	}
}
void	basic_init(t_stack **stack_a, t_stack **stack_b, int *i, int *j)
{
	*stack_a = NULL;
	*stack_b = NULL;
	*i = 0;
	*j = 0;
}

void	add_node(t_stack **list, char *value)
{
	t_stack	*new_node;
	t_stack	*tmp;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		exit(1);
	new_node->content = atoi(value);
	new_node->next = NULL;
	if (!*list)
		*list = new_node;
	else
	{
		tmp = *list;
		while ((*list)->next)
			(*list) = (*list)->next;
		(*list)->next = new_node;
		*list = tmp;
	}
}

void	print(t_stack *node)
{
	while (node)
	{
		printf("value=[%d]->", node->content);
		node = node->next;
	}
}

int main(int ac, char **av)
{
	int		i;
	int		j;
	char	**res;
	long	*dig;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack *tmp;

	basic_init(&stack_a, &stack_b, &i, &j);
	if (!av[1])
		return 0;
	while (av[++i])
		add_node(&stack_a, av[i]);
	stack_b = malloc(sizeof(t_stack));
	tmp = malloc(sizeof(t_stack));
	stack_b->content = 5;
	stack_b->next = tmp;
	tmp->content = 9;
	tmp->next = NULL;
	// tmp = malloc(sizeof(t_stack));
	// tmp->content = 11;
	// tmp->next = NULL;
	// if (av[3] && i == 4)
	// 	ft_sort_three(&stack_a, &stack_b);
	// else if (av[2] && i == 3)
	// 	ft_sort_two(&stack_a);
	ft_find_pos_a_b(&stack_a, &stack_b);
	ft_target_a_b(&stack_a, &stack_b);
	// printf("%d", stack_b->target_pos);
	print(stack_a);
	printf("\n");
	print(stack_b);
	printf("\n");
	printf("%d", stack_b->target_pos);
	// puts("\n stack_b");
	// print(stack_b);
	// free(tmp);
	// free(stack_b);
}
