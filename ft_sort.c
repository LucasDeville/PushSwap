/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:32:29 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/02 15:10:20 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void    ft_debug(t_lists **lists)
{
    t_lists *tmp;
	tmp = lists[0];
	printf("|A|");
	while (tmp)
	{
		printf(" %i", tmp->nb);
		tmp = tmp->next;
	}
	tmp = lists[1];
	printf(" |B|");
	while (tmp)
	{
		printf(" %i", tmp->nb);
		tmp = tmp->next;
	}
    printf("\n");
}
void    ft_push_this(t_lists **lists, t_infos *infos)
{
	if (infos->index_final > infos->sizeb)
		infos->index_final = 1;
    while (lists[0]->nb != infos->best->nb || infos->index_final != 1)
    {
        if (infos->index_best <= infos->sizea/2)
        {
            if (infos->index_final != 1 && infos->index_final <= infos->sizeb/2)
            {
                if (lists[0]->nb != infos->best->nb && infos->index_final != 1)
                { 
                    ft_rr(lists);
                    infos->index_final--;
                }
                else
                {
                    if (infos->index_final != 1)
                    {
                        ft_rb(lists);
                        infos->index_final--;
                    }
                    if (lists[0]->nb != infos->best->nb)
                        ft_ra(lists);
                }
            }
            else
            {
                if (infos->index_final != 1)
                {
                    ft_rrb(lists);
                    infos->index_final++;
                    if (infos->index_final > infos->sizeb)
                        infos->index_final = 1;
                }
                if (lists[0]->nb != infos->best->nb)
                    ft_ra(lists);
            }
        }
        else
        {
            if (infos->index_final != 1 && infos->index_final <= infos->sizeb/2)
            {
                if (infos->index_final != 1)
                {
                    ft_rb(lists);
                    infos->index_final--;
                }
                if (lists[0]->nb != infos->best->nb)
                    ft_rra(lists);
            }
            else
            {  
                if (lists[0]->nb != infos->best->nb && infos->index_final != 1)
                {   
                    ft_rrr(lists);
                    infos->index_final++;
                    if (infos->index_final > infos->sizeb)
                        infos->index_final = 1;
                }
                else
                {
                    if (infos->index_final != 1)
                    {
                        ft_rrb(lists);
                        infos->index_final++;
                        if (infos->index_final > infos->sizeb)
                            infos->index_final = 1;
                    }
                    if (lists[0]->nb != infos->best->nb)
                        ft_rra(lists);
                }
            }
        }
        //ft_push_this(lists, infos);
        //ft_debug(lists);
    }
    ft_pb(lists);
    //ft_debug(lists);
}

int ft_get_moves(t_lists *elt, t_lists **lists)
{
    int nb_mv_a;
    int nb_mv_b;
    if (ft_get_idx(lists[0], elt) <= ft_size(lists[0])/2)
    {
        if (ft_get_final_idx(lists[1], elt) <= ft_size(lists[1])/2)
            return (ft_max_idx(ft_get_idx(lists[0], elt), ft_get_final_idx(lists[1], elt)));
        nb_mv_a = ft_get_idx(lists[0], elt) - 1;
        nb_mv_b = ft_size(lists[1]) - ft_get_final_idx(lists[1], elt) + 1;
    }
    else
    {
        if (ft_get_final_idx(lists[1], elt) > ft_size(lists[1])/2)
            return (ft_max_idx(ft_size(lists[0]) - ft_get_idx(lists[0], elt) + 1, ft_size(lists[1]) - ft_get_final_idx(lists[1], elt)));
        nb_mv_a = ft_size(lists[0]) - ft_get_idx(lists[0], elt) + 1;
        nb_mv_b = ft_get_final_idx(lists[1], elt) - 1;
    }
    return (nb_mv_a + nb_mv_b);
}

void    ft_next_best(t_lists **lists, t_infos *infos)
{
    int i;
    int min;
    t_lists *tmp;
    i = 1;
    tmp = lists[0];
    infos->best = tmp;
    min = ft_get_moves(tmp, lists);
    while (i < min && tmp->next)
    {
        if(ft_get_moves(tmp->next, lists) < min)
        {
            infos->best = tmp->next;
            min = ft_get_moves(tmp->next, lists);
        }
        if(ft_get_moves(ft_get_elt_at(lists[0], ft_size(lists[0]) - i + 1), lists) < min)
        {
            infos->best = ft_get_elt_at(lists[0], ft_size(lists[0]) - i + 1);
            min = ft_get_moves(ft_get_elt_at(lists[0], ft_size(lists[0]) - i + 1), lists);
        }
        tmp = tmp->next;
        i++;
    }
    infos->index_best = ft_get_idx(lists[0], infos->best);
    infos->index_final = ft_get_final_idx(lists[1], infos->best);
    //ft_printf("BEST - POS %i - POS FINAL %i - min %i\n",infos->index_best, infos->index_final, min );
    //ft_debug(lists);
    //sleep(1);
}

void    ft_first_push(t_lists **lists, t_infos *infos)
{
    if (!ft_is_sorted(lists[0]) && ft_size(lists[0]) > 3)
        ft_pb(lists);
    if (!ft_is_sorted(lists[0]) && ft_size(lists[0]) > 3)
        ft_pb(lists);
    infos->sizea = ft_size(lists[0]);
    infos->sizeb = ft_size(lists[1]);
    while (infos->sizea > 3)
    {
        /*infos->min = ft_min(lists[1]);
        infos->max = ft_max(lists[1]);*/
        ft_next_best(lists, infos);
        ft_push_this(lists, infos);
        infos->sizea--;
        infos->sizeb++;
    }
}

void    ft_sort(t_lists **lists)
{
    t_infos *infos;
    
    infos = ft_calloc(sizeof(t_infos), 1);
    ft_first_push(lists, infos);

    ft_sort_3(lists);
    //printf("GO\n");
    infos->max = ft_max(lists[1]);
    if (ft_get_inx_int(lists, infos->max) < infos->sizeb/2)
    {
        while (lists[1]->nb != infos->max)
            ft_rb(lists);
    }
    else
    {
        while (lists[1]->nb != infos->max)
            ft_rrb(lists);
    }

    ft_back_b(lists);

    free(infos);
}
