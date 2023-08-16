/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:15:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/15 16:55:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

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

int	ft_error(t_lists **lists, int argc, char **argv)
{
	ft_printf("Error\n");
	if (lists)
		ft_free_lists(lists);
	if (argc == 2)
		ft_free_argv(argv);
	return (-1);
}

t_lists	*ft_create_chain(int nb, char **str, int min)
{
	t_lists	*a;
	t_lists	*tmp;

	tmp = NULL;
	while (nb >= min)
	{
		a = malloc(sizeof(t_lists));
		a->nb = atoi(str[nb--]);
		a->next = tmp;
		tmp = a;
	}
	return (a);
}

int	main(int argc, char **argv)
{
	t_lists	**lists;

	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		if (!argv[1][0] || argv[1][0] == ' ')
			return (-1);
		argv = ft_split(argv[1], ' ');
	}
	if ((argc == 2 && ft_check(argv, 0, 0) != 0)
		|| (argc > 2 && ft_check(argv, 1, 1) != 0))
		return (ft_error(NULL, argc, argv));
	lists = ft_calloc(sizeof(t_lists *), 3);
	if (argc == 2)
		lists[0] = ft_create_chain(ft_argv_size(argv) - 1, argv, 0);
	else
		lists[0] = ft_create_chain(argc - 1, argv, 1);
	ft_algo(lists);
	if (argc == 2)
		ft_free_argv(argv);
	ft_free_lists(lists);
	return (0);
}
