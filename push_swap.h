/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslaoui <sslaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:30:43 by sslaoui           #+#    #+#             */
/*   Updated: 2024/03/04 14:28:34 by sslaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>

// typedef struct s_list
// {
// 	int content;
// 	struct s_list *next;
// } t_list;

char	**check_d(char **arg, int i);
char	**check_arg(char **arg);
char	**split_arg(char *arg);
static char	*ftt_strchr(const char *s, int c);
static void	ft_free(char **res);
static int	ft_skip_and_lenght(char const *s, unsigned int *index, char c);
static char	**ft_allocate(char **res, char const *s, unsigned int j, char c);
char	**ft_split(char const *s, char c);