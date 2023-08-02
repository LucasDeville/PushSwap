/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:09:25 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/02 19:07:27 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_second_bis(t_lists **lists, t_infos *infos)
{
	if (lists[0]->nb != infos->best->nb && infos->index_final != 1)
	{
		ft_rrr(lists);
		infos->index_final++;
		if (infos->index_final > infos->sizeb)
			infos->index_final = 1;
	}
	else
	{
		if (lists[0]->nb != infos->best->nb)
			ft_rra(lists);
		if (infos->index_final != 1)
		{
			ft_rrb(lists);
			infos->index_final++;
			if (infos->index_final > infos->sizeb)
				infos->index_final = 1;
		}
	}
}

void	ft_second_side(t_lists **lists, t_infos *infos)
{
	if (infos->index_final != 1 && infos->index_final <= infos->sizeb / 2)
	{
		if (lists[0]->nb != infos->best->nb)
			ft_rra(lists);
		if (infos->index_final != 1)
		{
			ft_rb(lists);
			infos->index_final--;
		}
	}
	else
	{
		ft_second_bis(lists, infos);
	}
}

void	ft_first_bis(t_lists **lists, t_infos *infos)
{
	if (lists[0]->nb != infos->best->nb && infos->index_final != 1)
	{
		ft_rr(lists);
		infos->index_final--;
	}
	else
	{
		if (lists[0]->nb != infos->best->nb)
			ft_ra(lists);
		if (infos->index_final != 1)
		{
			ft_rb(lists);
			infos->index_final--;
		}
	}
}

void	ft_first_side(t_lists **lists, t_infos *infos)
{
	if (infos->index_final != 1 && infos->index_final <= infos->sizeb / 2)
	{
		ft_first_bis(lists, infos);
	}
	else
	{
		if (infos->index_final != 1)
		{
			ft_rrb(lists);
			infos->index_final++;
			if (infos->index_final > infos->sizeb)
				infos->index_final = 1;
		}
		if (lists[0]->nb != infos->best->nb)
			ft_ra(lists);
	}
}

void	ft_algo(t_lists **lists)
{
	if (ft_size(lists[0]) <= 3)
		ft_sort_3(lists);
	else
		ft_sort(lists);
}
