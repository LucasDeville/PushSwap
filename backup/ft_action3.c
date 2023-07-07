/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:58:40 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/03 14:41:40 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rrr(t_lists **lists)
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
	max = (b[index] - 1);
	tmp = b[max];
	while (max > 0)
	{
		b[max] = b[max - 1];
		max--;
	}
	b[0] = tmp;
	ft_printf("rrr\n");
}
