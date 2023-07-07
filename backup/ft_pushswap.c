/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:15:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/06/06 18:04:00 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_pushswap.h"

int	*ft_add_tabl(int argc, char **argv)
{
	int	i;
	int	*a;

	i = 0;
	a = malloc(sizeof(int) * (argc));
	if (a)
	{
		while (argv[i + 1])
		{
			a[i] = ft_atoi(argv[i + 1]);
			i++;
		}
		a[argc - 1] = argc - 1;
	}
	return (a);
}

int	ft_check(char **argv)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (argv[i])
	{
		while (argv[i][x])
		{
			if (argv[i][x] != '-' && (argv[i][x] < '0' || argv[i][x] > '9'))
				return (-1);
			x++;
		}
		x = 0;
		i++;
	}
	return (0);
}

int	ft_error(void)
{
	ft_printf("Error\n");
	return (-1);
}

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	i;

	if (argc < 3)
		return (0);
	if (ft_check(argv) != 0)
		return (ft_error());
	a = ft_add_tabl(argc, argv);
	if (!a)
		return(ft_error());
	if (ft_check_duplicate(a) == 1)
	{
		free(a);
		return(ft_error());	
	}
	b = malloc(sizeof(int) * (argc));
	if (!b)	
		return(ft_error());
	i = argc - 1;
	while (i >= 0)
	{
		b[i] = 0;
		i--;
	}
	ft_algo(a, b, argc - 1);
	free(a);
	free(b);
	return (0);
}
