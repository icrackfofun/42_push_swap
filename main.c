/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:14:19 by psantos-          #+#    #+#             */
/*   Updated: 2025/07/01 21:00:17 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"
#include "lib/libft.h"

void	free_info(t_info *info)
{
	int	i;

	i = 0;
	if (info->a.stack)
		free(info->a.stack);
	if (info->b.stack)
		free(info->b.stack);
	if (info->must_free && info->arr)
	{
		while (info->arr[i])
			free(info->arr[i++]);
		free(info->arr);
	}
}

int	is_all_spaces(char *str)
{
	int	i;

	if (!str || str[0] == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void	check_empty_or_space_args(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (av[i][0] == '\0' || is_all_spaces(av[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	t_info	info;

	if (ac == 1)
		exit (1);
	check_empty_or_space_args(ac, av);
	init_info(ac, av, &info);
	sort(&info);
	free_info(&info);
	return (0);
}
