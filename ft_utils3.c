/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:12:55 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/09 11:50:30 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

t_lists	*ft_get_elt_at(t_lists *list, int i)
{
	t_lists	*tmp;

	tmp = list;
	while (--i)
		tmp = tmp->next;
	return (tmp);
}

int	ft_check_max(char **str, int min)
{
	int	i;
	int	y;

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
		if ((str[i][0] == '-' && (!INT_MIN[y] || ft_strlen(str[i]) > 11)) 
				|| (str[i][0] != '-' && (!INT_MAX[y] 
				|| ft_strlen(str[i]) > 10)))
			return (-1);
		i++;
	}
	return (0);
}

int	ft_argv_size(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_free_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		free(argv[i++]);
	free(argv);
}

int	ft_abs_index(int index, int lists, t_infos *infos)
{
	int	moves;

	if (lists == 0)
		moves = index - (infos->sizea / 2);
	else
		moves = index - (infos->sizeb / 2);
	if (moves < 0)
		moves *= -1;
	return (moves);
}
