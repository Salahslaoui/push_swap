/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslaoui <sslaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:01:56 by sslaoui           #+#    #+#             */
/*   Updated: 2024/03/08 03:40:44 by sslaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libc.h>
#include <string.h>
#include "libft/libft.h"

void	ft_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
int	count_size(char **arg)
{
	int i;
	int j;
	int len;
	char **res;

	i = 1;
	len = 0;
	while(arg[i])
	{
	j = 0;
		res = ft_split(arg[i], ' ');
		while(res[j])
			j++;
		len += j;
		free(res);
		i++;
	}
	// printf("%d\n", len);
	return (len);
}
void	swap_digit(int *dig0, int *dig1)
{
	int tmp;
	
	tmp = *dig0;
	*dig0 = *dig1;
	*dig1 = tmp;
}

int	*ft_sort_dig(int *dig, int count_size)
{
	int i;
	int j;

	j = 0;
	while (j < count_size)
	{
		i = 1;
		while (i < count_size)
		{
			if(dig[i] < dig[i - 1])
			{
				swap_digit(&dig[i], &dig[i - 1]);
				i++;
			}
			i++;
		}
		j++;
	}
	return (dig);
}

void	ft_check_double(char **res, long *dig, int *i, char **arg)
{
	int j;
	int k;
	int *a;

	j = 0;
	k = 0;
	if (res[j] == (void *)0)
		ft_exit();
	while(res[j])
	{
		while(res[j][k])
		{
			if ((res[j][k] == 43 || res[j][k] == 45) && k > 0)
				ft_exit();
			k++;
		}
		dig[*i] = ft_atoi(res[j]);
		if (!dig)
			ft_exit();
		if (dig[*i] > 2147483647 || dig[*i] < -2147483648)
			ft_exit();
		j++;
		*i += 1;
	}
}

void	check_double(char **arg, int i)
{
	char **res;
	long *dig;
	int *a;
	int b;
	int f;

	b = 0;
	f = 0;
	dig = malloc(count_size(arg) + 1);
	while(arg[i])
	{
		res = ft_split(arg[i], ' ');
		ft_check_double(res, dig, &f, arg);
		i++;
	}
	a = ft_sort_dig((int *)dig, count_size(arg));
	while(b < count_size(arg))
	{
		if(a[b] == a[b + 1])
			ft_exit();
		b++;
	}
	// return 1;
}

char	**check_d(char **arg, int i)
{
	int j;
	int k;
	char **res;
	int dig;

	dig = 0;
	k = 0;
	// res = NULL;
	while(arg[i])
	{
		j = 0;
		while (arg[i][j])
		{
			if ((arg[i][j] == 43 || arg[i][j] == 45) && arg[i][j + 1] != ' ')
				j++;
			if ((arg[i][j] < 48 || arg[i][j] > 57) && arg[i][j] != ' ')
				ft_exit();
			j++;
		}
		k = 0;
		i++;
	}
	return res;
}

int main(int ac, char **av)
{
	char	**res;
	// char **r;
	long dig;
	// int j = 0;
	// int k = 0;
	// // dig = 0;
	// int i = 1;
	// res = check_err(av, i);
	res = check_d(av, 1);
	check_double(av, 1);
}



