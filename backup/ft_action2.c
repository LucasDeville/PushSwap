/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:50:11 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/03 14:41:40 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_ra(int *a, int index)
{
	int	tmp;
	int	max;
	int 	i;

	max = (a[index] - 1);
	tmp = a[0];
	i = 0;
	while (i < max)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[a[index] - 1] = tmp; 
	ft_printf("ra\n");
}

void	ft_rb(int *b, int index)
{
	int	tmp;
	int	max;
	int 	i;

	max = (b[index] - 1);
	tmp = b[0];
	i = 0;
	while (i < max)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[b[index] - 1] = tmp; 
	ft_printf("rb\n");
}

void	ft_rr(t_lists **lists)
{
	int	tmp;
	int	max;
	int 	i;

	max = (a[index] - 1);
	tmp = a[0];
	i = 0;
	while (i < max)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[a[index] - 1] = tmp; 
	max = (b[index] - 1);
	tmp = b[0];
	i = 0;
	while (i < max)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[b[index] - 1] = tmp; 
	ft_printf("rr\n");
}

void	ft_rra(int *a, int index)
{
	int	tmp;
	int	max;

	max = (a[index] - 1);
	tmp = a[max];
	while (max > 0)
	{
		a[max] = a[max - 1];
		max--;
	}
	a[0] = tmp;
	ft_printf("rra\n");
}

void	ft_rrb(int *b, int index)
{
	int	tmp;
	int	max;

	max = (b[index] - 1);
	tmp = b[max];
	while (max > 0)
	{
		b[max] = b[max - 1];
		max--;
	}
	b[0] = tmp;
	ft_printf("rrb\n");
}
