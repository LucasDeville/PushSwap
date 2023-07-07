/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:32:29 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/07 14:54:13 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

/*void    ft_is_closer(int a, int b, int value, t_infos *infos)
{
    if (ft_abs())
        return (1);    
    return (0);
}

void    ft_next_pb(t_lists **lists, t_infos *infos)
{
    t_lists *tmp;


    while (tmp)
    {
        if (ft_is_closer(algo, tmp->nb))
        {

        }
    }
    ft_push_this(lists, infos);
}*/

void    ft_first_push(t_lists **lists, t_infos *infos)
{
    int size;

    if (!ft_is_sorted(lists[0]) && ft_size(lists[0]) > 3)
        ft_pb(lists);
    if (!ft_is_sorted(lists[0]) && ft_size(lists[0]) > 3)
        ft_pb(lists);
    size = ft_size(lists[0]);
    infos->sizea = ft_size(lists[0]);
    infos->sizeb = ft_size(lists[1]);
    while (size > 3)
    {
        infos->min = ft_min(lists[1]);
        infos->max = ft_max(lists[1]);
        //ft_next_pb(lists, infos);
        infos->sizea--;
        infos->sizeb++;
    }
}

void    ft_sort(t_lists **lists)
{
    t_infos *infos;
    
    infos = ft_calloc(sizeof(t_infos), 1);
    ft_first_push(lists, infos);
    free(infos);
}