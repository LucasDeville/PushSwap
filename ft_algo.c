/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:09:25 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/01 14:50:27 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"


void    ft_algo(t_lists **lists)
{
    if (ft_size(lists[0]) <= 3)
        ft_sort_3(lists);
    else
        ft_sort(lists);
}
