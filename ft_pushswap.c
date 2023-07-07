/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 09:15:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/06 14:38:55 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

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

	if (ft_check_duplicate(argv) != 0)
		return(-1);
	return (0);
}

int	ft_error(void)
{
	ft_printf("Error\n");
	return (-1);
}

t_lists *ft_create_chain(int nb, char **str)
{
	t_lists	*a;
	t_lists	*tmp;

	tmp = NULL;
	while (nb >= 1)
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

	if (argc < 3)
		return (0);
	if (ft_check(argv) != 0)
		return (ft_error());
	lists = ft_calloc(sizeof(t_lists *), 3);
	lists[0] = ft_create_chain(argc - 1, argv);
	
	//------------------------------------------------//
	t_lists *tmp;
	tmp = lists[0];
	while (tmp)
	{
		printf("%i\n", tmp->nb);
		tmp = tmp->next;
	}
	printf("\n");
	//------------//
/*
	ft_sa(lists);
	ft_pb(lists);
	ft_pb(lists);
	ft_pb(lists);
	ft_sa(lists);
	ft_pa(lists);
	ft_pa(lists);
	ft_pa(lists);
*/
	ft_algo((argc - 1), lists);
	//ft_printf("%i", ft_max(lists));
	//------------//
	printf("\n");
	tmp = lists[0];
	printf("-A-\n");
	while (tmp)
	{
		printf("%i\n", tmp->nb);
		tmp = tmp->next;
	}
	tmp = lists[1];
	printf("-B-\n");
	while (tmp)
	{
		printf("%i\n", tmp->nb);
		tmp = tmp->next;
	}
	//------------------------------------------------//


	ft_free_lists(lists);
	return (0);
}