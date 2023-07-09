/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:55:48 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/09 15:43:11 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

/*int ft_closer(int best, int try, int min, int max)
{
    if ()

    return (0);
}*/

int ft_abs(int a)
{
    if (a < 0)
        a *= -1;
    return (a);
}   

int ft_move_needed(int index, int size)
{
    int moves;

    moves = ft_abs(index - (size / 2));
    if (moves < 0)
        moves *= -1;
    return (moves);
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
