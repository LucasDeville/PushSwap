/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:38:09 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/02 19:04:20 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_push_this(t_lists **lists, t_infos *infos)
{
	if (infos->index_final > infos->sizeb)
		infos->index_final = 1;
	while (lists[0]->nb != infos->best->nb || infos->index_final != 1)
	{
		if (infos->index_best <= infos->sizea / 2)
		{
			ft_first_side(lists, infos);
		}
		else
		{
			ft_second_side(lists, infos);
		}
	}
	ft_pb(lists);
}

int	ft_get_moves(t_lists *elt, t_lists **lists)
{
	int	nb_mv_a;
	int	nb_mv_b;

	if (ft_get_idx(lists[0], elt) <= (ft_size(lists[0]) / 2))
	{
		if (ft_get_final_idx(lists[1], elt) <= (ft_size(lists[1]) / 2))
			return (ft_max_idx(ft_get_idx(lists[0], elt)
					, ft_get_final_idx(lists[1], elt)));
		nb_mv_a = ft_get_idx(lists[0], elt) - 1;
		nb_mv_b = ft_size(lists[1]) - ft_get_final_idx(lists[1], elt) + 1;
	}
	else
	{
		if (ft_get_final_idx(lists[1], elt) > (ft_size(lists[1]) / 2))
			return (ft_max_idx(ft_size(lists[0])
					- ft_get_idx(lists[0], elt) + 1
					, ft_size(lists[1]) - ft_get_final_idx(lists[1], elt)));
		nb_mv_a = ft_size(lists[0]) - ft_get_idx(lists[0], elt) + 1;
		nb_mv_b = ft_get_final_idx(lists[1], elt) - 1;
	}
	return (nb_mv_a + nb_mv_b);
}

void	ft_next_best(t_lists **lists, t_infos *infos)
{
	t_lists	*tmp;
	int		i;
	int		min;

	i = 0;
	tmp = lists[0];
	min = ft_get_moves(tmp, lists);
	while (++i < min && tmp->next)
	{
		if (ft_get_moves(tmp->next, lists) < min)
		{
			infos->best = tmp->next;
			min = ft_get_moves(tmp->next, lists);
		}
		if (ft_get_moves(ft_get_elt_at(lists[0]
					, ft_size(lists[0]) - i + 1), lists) < min)
		{
			infos->best = ft_get_elt_at(lists[0], ft_size(lists[0]) - i + 1);
			min = ft_get_moves(ft_get_elt_at(lists[0],
						ft_size(lists[0]) - i + 1), lists);
		}
		tmp = tmp->next;
	}
	infos->index_best = ft_get_idx(lists[0], infos->best);
	infos->index_final = ft_get_final_idx(lists[1], infos->best);
}

void	ft_first_push(t_lists **lists, t_infos *infos)
{
	if (!ft_is_sorted(lists[0]) && ft_size(lists[0]) > 3)
		ft_pb(lists);
	if (!ft_is_sorted(lists[0]) && ft_size(lists[0]) > 3)
		ft_pb(lists);
	infos->sizea = ft_size(lists[0]);
	infos->sizeb = ft_size(lists[1]);
	while (infos->sizea > infos->size_divided)
	{
		infos->best = lists[0];
		ft_next_best(lists, infos);
		ft_push_this(lists, infos);
		infos->sizea--;
		infos->sizeb++;
	}
}

void	ft_sort(t_lists **lists)
{
	t_infos	*infos;

	infos = ft_calloc(sizeof(t_infos), 1);
	infos->size_divided = ((ft_size(lists[0]) / 100) * 6);
	if (infos->size_divided < 3)
		infos->size_divided = 3;
	ft_first_push(lists, infos);
	infos->max = ft_max(lists[1]);
	if (ft_get_inx_int(lists[1], infos->max) < infos->sizeb / 2)
	{
		while (lists[1]->nb != infos->max)
			ft_rb(lists);
	}
	else
	{
		while (lists[1]->nb != infos->max)
			ft_rrb(lists);
	}
	if (infos->size_divided > 3)
		ft_divided_algo(lists, infos);
	ft_sort_3(lists);
	ft_back_divided(lists, infos);
	ft_back_b(lists, infos);
	free(infos);
}
