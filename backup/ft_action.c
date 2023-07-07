/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:20:43 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/03 14:41:40 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sa(int *a, int max)
{
	int	tmp;

	if (a[max] < 2)
		return ;
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	ft_printf("sa\n");
}

void	ft_sb(int *b, int max)
{
	int	tmp;

	if (b[max] < 2)
		return ;
	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	ft_printf("sb\n");
}

void	ft_ss(t_lists **lists)
{
	int	tmp;

	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	ft_printf("ss\n");
}

void	ft_pa(t_lists **lists)
{
	if (b[index] <= 0)
		return ;
	int	tmp;
	int	i;
	int	max;

	tmp = b[0];
	i = 0;
	max = b[index];
	while (i != max)
	{
		if (b[i + 1] && (i + 1) != max)
			b[i] = b[i + 1];
		else 
			b[i] = 0;
		i++;
	}
	b[index] = (b[index] - 1);
	i = a[index] + 1;
	a[index] = (a[index] + 1);
	while (i > 0)
	{
		a[i] = a[i - 1];  
		i--;
	}
	a[0] = tmp;
	ft_printf("pa\n");
}

void	ft_pb(t_lists **lists)
{
	if (a[index] <= 0)
		return ;
	int	tmp;
	int	i;
	int	max;

	tmp = a[0];
	i = 0;
	max = a[index];
	while (i != max)
	{
		if (a[i + 1] && (i + 1) != max)
			a[i] = a[i + 1];
		else 
			a[i] = 0;
		i++;
	}
	a[index] = (a[index] - 1);
	i = b[index] + 1;
	b[index] = (b[index] + 1);
	while (i > 0)
	{
		b[i] = b[i - 1];  
		i--;
	}
	b[0] = tmp;
	ft_printf("pb\n");
}
