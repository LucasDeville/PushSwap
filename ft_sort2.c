/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:32:29 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/01 17:39:12 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int ft_get_final_idx(t_lists *lists, t_lists *elt)
{
    int i;
    int max;
    int min;
    t_lists *tmp;

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

void	ft_back_b(t_lists **lists)
{
	int	i;

	i = 3;
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

