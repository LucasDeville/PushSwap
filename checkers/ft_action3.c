/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_action3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:58:40 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/15 16:17:30 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_rrr(t_lists **lists)
{
	t_lists	*tmp;

	if (!lists[0] || !lists[0]->next)
		return ;
	tmp = ft_last_lists(lists[0]);
	tmp->next = lists[0];
	lists[0] = tmp;
	while (tmp->next != lists[0])
		tmp = tmp->next;
	tmp->next = NULL;
	if (!lists[1] || !lists[1]->next)
		return ;
	tmp = ft_last_lists(lists[1]);
	tmp->next = lists[1];
	lists[1] = tmp;
	while (tmp->next != lists[1])
		tmp = tmp->next;
	tmp->next = NULL;
}

void	ft_free_lists(t_lists **lists)
{
	t_lists	*tmp;

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

int	ft_is_sorted(t_lists **lists)
{
	int		value;
	t_lists	*tmp;

	if (lists[1] || !lists[0])
		return (0);
	tmp = lists[0];
	while (tmp)
	{
		value = tmp->nb;
		tmp = tmp->next;
		if (tmp && value > tmp->nb)
			return (0);
	}
	return (1);
}
