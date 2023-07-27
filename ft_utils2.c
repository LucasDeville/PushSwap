/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:55:48 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/27 19:02:36 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int ft_max_idx(int a, int b)
{
    if (a > b)
        return (a);
    return (b);
}

int ft_get_idx(t_lists *lists, t_lists *elt)
{
    t_lists *tmp;
    int i;

    i = 0;
    tmp = lists;
    while (tmp->nb != elt->nb)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

int ft_abs(int a)
{
    if (a < 0)
        a *= -1;
    return (a);
}

int ft_size(t_lists *lists)
{
    t_lists *tmp;
    int nb;

    nb = 0;
    tmp = lists;
    while (tmp)
    {
        tmp = tmp->next;
        nb++;
    }
    return (nb);
}

int ft_is_sorted(t_lists *lists)
{
    t_lists *tmp;
    int nb;

    tmp = lists;
    nb = tmp->nb;
    tmp = tmp->next;
    while (tmp)
    {
        if (nb > tmp->nb)
            return (0);
        nb = tmp->nb;
        tmp = tmp->next;
    }
    return (1);
}
