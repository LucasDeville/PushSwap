/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:32:29 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/27 18:03:22 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int ft_get_final_idx(t_lists *lists, t_lists *elt)
{
    int i;
    t_lists *tmp;

    tmp = lists;

    i = 1;
    if (tmp->nb < elt->nb && ft_last_lists(lists)->nb > elt->nb)
        return (i);
    while (tmp)
    {
        if (tmp->nb > elt->nb && tmp->next->nb < elt->nb)
            return (++i);
        tmp = tmp->next;
        i++;
    }
    return (i);
}