/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:05:50 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/05 14:43:37 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void    ft_sort_3(t_lists **lists)
{
    if (ft_max(lists[0]) == lists[0]->nb)
    {
        ft_ra(lists);
        if (ft_min(lists[0]) != lists[0]->nb)
            ft_sa(lists);
    }
    else if (ft_min(lists[0]) == lists[0]->nb && !ft_is_sorted(lists[0]))
    {
        ft_rra(lists);
        ft_sa(lists);
    }
    else if (ft_min(lists[0]) != lists[0]->nb && ft_max(lists[0]) != lists[0]->nb)
    {
        ft_sa(lists);
        ft_sort_3(lists);
    }
}