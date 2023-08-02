/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:32:29 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/02 18:46:27 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_back_divided(t_lists **lists, t_infos *infos)
{
	int	i;

	i = 3;
	if (lists[0]->nb > lists[1]->nb)
	{
		while (lists[1]->nb != infos->max)
			ft_pa(lists);
	}
	while (lists[1]->nb != infos->max)
	{
		while (i > 0 && ft_last_lists(lists[0])->nb > lists[1]->nb)
		{
			ft_rra(lists);
			i--;
		}
		ft_pa(lists);
	}
	while (ft_last_lists(lists[0])->nb < lists[0]->nb)
		ft_rra(lists); 
}

void	ft_divided_algo(t_lists **lists, t_infos *infos)
{
	while (infos->sizea > 3)
	{
		infos->min = ft_min(lists[0]);
		if (ft_get_inx_int(lists[0], infos->min) <= infos->sizea / 2)
		{
			while (lists[0]->nb != infos->min)
				ft_ra(lists);
		}
		else
		{
			while (lists[0]->nb != infos->min)
				ft_rra(lists);
		}
		ft_pb(lists);
		infos->sizea--;
	}
}

int	ft_get_inx_int(t_lists *lists, int i)
{
	t_lists	*tmp;
	int		y;

	tmp = lists;
	y = 0;
	while (tmp->nb != i)
	{
		tmp = tmp->next;
		y++;
	}
	return (y);
}

int	ft_get_final_idx(t_lists *lists, t_lists *elt)
{
	t_lists	*tmp;
	int		i;
	int		max;
	int		min;

	tmp = lists;
	i = 1;
	max = ft_max(lists);
	min = ft_min(lists);
	if (tmp->nb < elt->nb && ft_last_lists(lists)->nb > elt->nb)
		return (i);
	while (tmp)
	{
		if (elt->nb > max && tmp->nb == max)
			return (i);
		else if (elt->nb < min && tmp->nb == min)
			return (++i);
		else if (tmp->nb > elt->nb && tmp->next->nb < elt->nb)
			return (++i);
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_back_b(t_lists **lists, t_infos *infos)
{
	int	i;

	i = infos->size_divided;
	if (lists[0]->nb > lists[1]->nb)
	{
		while (lists[1])
			ft_pa(lists);
	}
	while (lists[1])
	{
		while (i > 0 && ft_last_lists(lists[0])->nb > lists[1]->nb)
		{
			ft_rra(lists);
			i--;
		}
		ft_pa(lists);
	}
	while (ft_last_lists(lists[0])->nb < lists[0]->nb)
		ft_rra(lists);
}
