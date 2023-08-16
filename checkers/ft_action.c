/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 10:20:43 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/09 11:46:36 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0])
		return ;
	tmp = lists[0]->next;
	if (!tmp)
		return ;
	lists[0]->next = tmp->next;
	tmp->next = lists[0];
	lists[0] = tmp;
}

void	ft_sb(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[1])
		return ;
	tmp = lists[1]->next;
	if (!tmp)
		return ;
	lists[1]->next = tmp->next;
	tmp->next = lists[1];
	lists[1] = tmp;
}

void	ft_ss(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0] || !lists[1])
		return ;
	tmp = lists[0]->next;
	if (!tmp)
		return ;
	lists[0]->next = tmp->next;
	tmp->next = lists[0];
	lists[0] = tmp;
	tmp = lists[1]->next;
	if (!tmp)
		return ;
	lists[1]->next = tmp->next;
	tmp->next = lists[1];
	lists[1] = tmp;
}

void	ft_pa(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[1])
		return ;
	tmp = lists[1];
	lists[1] = lists[1]->next;
	if (!tmp)
		return ;
	tmp->next = lists[0];
	lists[0] = tmp;
}

void	ft_pb(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0])
		return ;
	tmp = lists[0];
	lists[0] = lists[0]->next;
	if (!tmp)
		return ;
	tmp->next = lists[1];
	lists[1] = tmp;
}
