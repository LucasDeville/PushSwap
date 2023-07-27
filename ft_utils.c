/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:23:52 by ldeville          #+#    #+#             */
/*   Updated: 2023/07/27 17:37:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int ft_min(t_lists *lists)
{
    t_lists *tmp;
    int nb;

    tmp = lists;
    nb = tmp->nb;
    tmp = tmp->next;
    while (tmp)
    {
        if (tmp->nb < nb)
            nb = tmp->nb;
        tmp = tmp->next;
    }
    return (nb);
}

int ft_max(t_lists *lists)
{
    t_lists *tmp;
    int nb;

    tmp = lists;
    nb = tmp->nb;
    tmp = tmp->next;
    while (tmp)
    {
        if (tmp->nb > nb)
            nb = tmp->nb;
        tmp = tmp->next;
    }
    return (nb);
}

void    ft_free_lists(t_lists **lists)
{
    t_lists *tmp;
	while (lists[0])
	{
		tmp = lists[0];
		lists[0] = lists[0]->next;
		free(tmp);
	}
	while (lists[1])
	{
		tmp = lists[1];
		lists[1] = lists[1]->next;
		free(tmp);
	}
    free(lists);
}

t_lists *ft_last_lists(t_lists *lists)
{
    while(lists->next)
        lists = lists->next;
    return (lists);
}

int ft_check_duplicate(char **str)
{
    int i;
    int y;

    i = 1;
    while(str[i])
    {
        y = 1;
        while (str[y])
        {
            if (i != y && (ft_atoi(str[i]) == ft_atoi(str[y])))
                return (-1);
            y++;
        }
        i++;
    }
    return (0);    
}

