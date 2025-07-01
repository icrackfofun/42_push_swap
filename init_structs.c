/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 21:48:38 by psantos-          #+#    #+#             */
/*   Updated: 2025/07/01 20:14:14 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"

void	init_single_arg(char **av, t_info *info)
{
	info->arr = ft_split(av[1], ' ');
	if (!info->arr)
		exit(1);
	info->must_free = 1;
}

void	init_multi_args(int ac, char **av, t_info *info)
{
	char	*joined;
	int		i;

	joined = ft_strdup("");
	if (!joined)
		exit(1);
	i = 1;
	while (i < ac)
	{
		append_to_joined(&joined, av[i]);
		i++;
	}
	info->arr = ft_split(joined, ' ');
	free(joined);
	if (!info->arr)
		exit(1);
	info->must_free = 1;
}

void	append_to_joined(char **joined, char *arg)
{
	char	*tmp;

	tmp = ft_strjoin(*joined, arg);
	if (!tmp)
	{
		free(*joined);
		exit(1);
	}
	free(*joined);
	*joined = tmp;
	tmp = ft_strjoin(*joined, " ");
	if (!tmp)
	{
		free(*joined);
		exit(1);
	}
	free(*joined);
	*joined = tmp;
}

void	create_stacks(char **arr, t_info *info)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
		i++;
	info->a.stack = malloc(i * sizeof(int));
	info->b.stack = malloc(i * sizeof(int));
	if (!info->a.stack || !info->b.stack)
		exit(1);
	info->a.size = i;
	info->b.size = 0;
	i--;
	j = 0;
	while (i >= 0)
	{
		info->a.stack[j] = ft_atoi(arr[i]);
		i--;
		j++;
	}
}

void	init_info(int ac, char **av, t_info *info)
{
	if (ac == 2)
		init_single_arg(av, info);
	else
		init_multi_args(ac, av, info);
	arg_check(info->arr);
	create_stacks(info->arr, info);
}
