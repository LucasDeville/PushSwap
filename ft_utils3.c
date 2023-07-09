/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:42:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/09 16:29:32 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

/*void    ft_init_infos(t_infos **infos)
{
    infos.index = 0;
    infos.best = NULL;
    infos.size = size;
}*/

int ft_check_max(char **str, int min)
{
    int i;
    int y;

    i = min;
    while (str[i])
    {
        y = 0;
        while (str[i][y])
        {
            if ((str[i][0] == '-' && str[i][y] >= INT_MIN[y]) ||
            (str[i][0] != '-' && str[i][y] >= INT_MAX[y]))
                y++;
            else 
                break ;
        }
        if ((str[i][0] == '-' && !INT_MIN[y]) || (str[i][0] != '-' && !INT_MAX[y]))
            return (-1);
        i++;
    }
    return (0);
}

int ft_argv_size(char **str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_free_argv(char **argv)
{
    int i;

    i = 0;
    while (argv[i])
        free(argv[i++]);
    free(argv);
}

int ft_abs_index(int index, int lists, t_infos *infos)
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