/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:42:57 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/15 17:14:30 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_free_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		free(argv[i++]);
	free(argv);
}

int	ft_check_max(char **str, int min)
{
	int	i;
	int	y;

	i = min;
	while (str[i])
	{
		y = 0;
		while (str[i][y])
		{
			if ((str[i][0] == '-' && str[i][y] >= INT_MIN[y]) ||
			(str[i][0] != '-' && str[i][y] >= INT_MAX[y]))
				y++;
			else
				break ;
		}
		if ((str[i][0] == '-' && (!INT_MIN[y] || ft_strlen(str[i]) > 11)) 
				|| (str[i][0] != '-' && (!INT_MAX[y] 
				|| ft_strlen(str[i]) > 10)))
			return (-1);
		i++;
	}
	return (0);
}

int	ft_check_duplicate(char **str, int a)
{
	int	i;
	int	y;

	i = a;
	while (str[i])
	{
		y = 1;
		while (str[y])
		{
			if (i != y && (ft_atoi(str[i]) == ft_atoi(str[y])))
				return (-1);
			y++;
		}
		i++;
	}
	return (0);
}

int	ft_check(char **argv, int min, int a)
{
	int	i;
	int	x;

	i = min;
	x = 0;
	while (argv[i])
	{
		min = 0;
		while (argv[i][x])
		{
			if (argv[i][x] == '-' || argv[i][x] == '+')
				min++;
			else if (argv[i][x] < '0' || argv[i][x] > '9')
				return (-1);
			x++;
		}
		if (min >= 2 || argv[i][x - 1] < '0' || argv[i][x - 1] > '9')
			return (-1);
		x = 0;
		i++;
	}
	if (ft_check_duplicate(argv, a) != 0 || ft_check_max(argv, a) != 0)
		return (-1);
	return (0);
}

void	ft_exit(t_lists **lists, char **argv, int a)
{
	if (argv != NULL && argv[1][0] == ' ')
		ft_printf("Error\n");
	if (a == 0)
		ft_free_argv(argv);
	ft_free_lists(lists);
	exit(EXIT_FAILURE);
}
