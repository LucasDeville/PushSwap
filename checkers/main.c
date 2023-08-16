/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:39:44 by ldeville          #+#    #+#             */
/*   Updated: 2023/08/15 16:56:18 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_check_sub(t_lists **lists, char *str, int i)
{
	if (str[i + 2] == 'a')
		ft_rra(lists);
	else if (str[i + 2] == 'b')
		ft_rrb(lists);
	else
		ft_rrr(lists);
}

void	ft_may_check(char *str, t_lists **lists, int i)
{
	if (i == -1)
	{
		ft_printf("Error\n");
		free(str);
		ft_exit(lists, NULL, 1);
	}
	if (str[i + 3] && str[i + 3] == '\n')
		i += 4;
	else
		i += 3;
	if (str[i])
		ft_checker(str, lists, i);
}

void	ft_checker(char *str, t_lists **lists, int i)
{
	if (!str[0])
		return ;
	else if (str[i] == 's' && str[i + 1] == 'a' && str[i + 2] == '\n')
		ft_sa(lists);
	else if (str[i] == 's' && str[i + 1] == 'b' && str[i + 2] == '\n')
		ft_sb(lists);
	else if (str[i] == 'p' && str[i + 1] == 'a' && str[i + 2] == '\n')
		ft_pa(lists);
	else if (str[i] == 'p' && str[i + 1] == 'b' && str[i + 2] == '\n')
		ft_pb(lists);
	else if (str[i] == 'r' && str[i + 1] == 'a' && str[i + 2] == '\n')
		ft_ra(lists);
	else if (str[i] == 'r' && str[i + 1] == 'b' && str[i + 2] == '\n')
		ft_rb(lists);
	else if (str[i] == 'r' && str[i + 1] == 'r' && str[i + 3] == '\n' 
		&& (str[i + 1] == 'r' || str[i + 1] == 'a' || str[i + 1] == 'b'))
		ft_check_sub(lists, str, i);
	else if (str[i] == 'r' && str[i + 1] == 'r' && str[i + 2] == '\n')
		ft_rr(lists);
	else if (str[i] == 's' && str[i + 1] == 's' && str[i + 2] == '\n')
		ft_ss(lists);
	else 
		ft_may_check(str, lists, -1);
	ft_may_check(str, lists, i);
}

char	*ft_argc_init(int argc, char **argv, t_lists **lists)
{
	if (argc == 2)
	{
		if (!argv[1][0] || argv[1][0] == ' ')
			ft_exit(lists, argv, 1);
		argv = ft_split(argv[1], ' ');
		if (ft_check(argv, 0, 0) != 0)
		{
			ft_printf("Error\n");
			ft_exit(lists, argv, 0);
		}
		lists[0] = ft_create_chain(ft_argv_size(argv) - 1, argv, 0);
		ft_free_argv(argv);
		return (ft_clone_terminal());
	}
	else
	{
		if (ft_check(argv, 1, 1) != 0)
		{
			ft_printf("Error\n");
			ft_exit(lists, argv, 1);
		}
		lists[0] = ft_create_chain(argc - 1, argv, 1);
		return (ft_clone_terminal());
	}
}

int	main(int argc, char **argv)
{
	t_lists	**lists;
	char	*str;

	if (argc < 2)
		return (-1);
	else
	{
		lists = ft_calloc(sizeof(t_lists *), 3);
		str = ft_argc_init(argc, argv, lists);
		ft_checker(str, lists, 0);
		if (ft_is_sorted(lists))
			ft_printf("OK\n");
		else
			ft_printf("KO\n");
		ft_free_lists(lists);
	}
	free(str);
	if (argc < 2)
		return (-1);
	return (0);
}
