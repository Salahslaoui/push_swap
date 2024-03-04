/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslaoui <sslaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:01:56 by sslaoui           #+#    #+#             */
/*   Updated: 2024/03/04 17:46:28 by sslaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <libc.h>
#include <string.h>
#include "libft/libft.h"

// void	split_arg(char *arg)
// {
// 	char **res;
// 	res = ft_split(arg);
// 	printf("*res = %s", *(res + 1));
// }

void	check_d2(char **arg, int i, int j)
{
	if ((arg[i][j] == 32 && arg[i][j + 1] == '\0') || arg[i][j] == '\0')
	{
		printf("Error\n");
		exit(0);
	}
}
void	ft_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

char	**check_d(char **arg, int i)
{
	int j;
	// char *str;
	// char *tmp;
	// int *cap;

	// str = NULL;
	// tmp = NULL;
	// cap = 0;
	while(arg[i])
	{
		j = 0;
		r = ft_split();
		if (r[0][0] == "\0")
		
		if (arg[i][j] == '\0')
			ft_exit();
		if ((arg[i][j] == 43 || arg[i][j] == 45) && arg[i][j + 1] == '\0')
			ft_exit();
		while(arg[i][j])
		{
			if ((arg[i][j] == 32 && arg[i][j + 1] == '\0'))
				ft_exit();
			if ((arg[i][j] >= 48 && arg[i][j] <= 57) || arg[i][j] == 32)
				j++;
			else if (j == 0 && (arg[i][j] == 43 || arg[i][j] == 45))
				j++;
			else
				ft_exit();
		// tmp = str;
		// str = ft_strjoin(str, ft_strjoin(arg[i], " "));
		// free(tmp);
		}
		// cap[i] = ft_atoi(*ft_split(str, ' '));
		i++;
	}
		return (arg);
}

char	**check_arg(char **arg)
{
	int	k;
	char **res;
	res = NULL;
	int	i;
	int j;

	i = 1;
	j = 0;
	res = check_d(arg, i);
	return (res);
}
int ft_strlen2(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int main(int ac, char **av)
{
	char	**res;
	res = NULL;
	char **r;
	int dig[20];
	int j = 0;
	int k = 0;
	// dig = 0;
	int i = 1;
	res = check_d(av, i);
	while(av[i])
	{
		r = ft_split(av[i], ' ');
		
		
		while (r[j])
		{
			printf("%s\n", r[j]);
			printf("here\n");
			// dig[k] = ft_atoi(r[j]);
			k++;
			j++;
		}
		printf("here\n");
		i++;
		j = 0;
	}
	// while(r[i])
	// {
	// 	printf("%s ", r[i]);
	// 	i++;
	// }
	// while(r)
	// {
	// 	printf("%s", r[i]);
	// 	i++;
	// }
	// while(dig[i])
	// {
	// 	printf("%d", dig[i]);
	// 	i++;
	// }
	// printf("%s", res[1]);
	// printf("%d", dig[0]);
	// if (ac == 9)
	// {
	// 	printf("too many");
	// 	return(0);
	// }
	// res = check_arg(av);

	// while (av[i])
	// {
	// 	j = 0;
	// 	while(av[i][j] != '\0')
	// 	{
	// 		write(1, &av[i][j], 1);
	// 		j++;
	// 	}
	// 	write(1, "\n", 1);
	// 	i++;
	// }
	// write(1, &av[1][0], 1);
}



