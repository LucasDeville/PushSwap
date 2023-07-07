/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:42:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/07 14:21:10 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

/*void    ft_init_infos(t_infos **infos)
{
    infos.index = 0;
    infos.best = NULL;
    infos.size = size;
}*/

int ft_abs_index(int index, int lists t_infos *infos)
{
    int moves;
    if (lists == 0)
        moves = index - (infos->sizea / 2);
    else
        moves = index - (infos->sizeb / 2);
    if (moves < 0)
        moves *= -1;
    return (moves);
}