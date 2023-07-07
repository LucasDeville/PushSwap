/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:09:25 by ldeville          #+#    #+#             */
/*   Updated: 2023/06/06 15:41:56 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	*ft_sort(int *a, int max)
{
	int	*sort;
	int	i;
	int	y;
	int	tmp;

	i = -1;
	sort = malloc(sizeof(int) * max + 1);
	if (!sort)
		return (0);
	while (++i != max)
		sort[i] = a[i];
	i -= 1;
	y = max;
	while (y != 0)
	{
		while (i != 0)
		{
			if (sort[i] < sort[i - 1])
			{
				tmp = sort[i];
				sort[i] = sort[i - 1];
				sort[i - 1] = tmp;			
			}
			i--;
		}
		i = max - 1;
		y--;
	}
	return (sort);
}

void	ft_splitsort(int *a, int *b, int mid, int max)
{
	int	i;

	i = 0;

	while (i < (max / 2))
	{
		while (a[0] <= mid && a[max] != 0)
			ft_pb(a, b, max);
		while (a[1] <= mid && a[max] > 1)
		{
			ft_sa(a, max);
			ft_pb(a, b, max);
		}
		while (a[max] > 0 && a[a[max]] <= mid)
		{
			ft_ra(a, max);
			ft_pb(a, b, max);
		}
		i++;
	}
}

void	ft_algo(int *a, int *b, int max)
{
	int	*sort;
	int	mid;
	int i = 0;
	int maxi = a[max];
	
	sort = ft_sort(a, max);
	mid = sort[(max) / 2];
	ft_splitsort(a, b, mid, max);
	ft_printf("A:\n");
	while (i != maxi)
	{
		ft_printf("%i\n", a[i]);
		i++;
	}
	maxi = b[max];
	i = 0;
	ft_printf("B:\n");
	while (i != maxi)
	{
		ft_printf("%i\n", b[i]);
		i++;
	}
	ft_printf("\n\nA -> %i\nB -> %i\n\n", a[max], b[max]);
	i = 0;
	ft_printf("SORT:\n");
	while (sort[i])
	{
		ft_printf("%i\n", sort[i]);
		i++;
	}
	free(sort);
}