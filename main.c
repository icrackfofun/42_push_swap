/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:14:19 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/17 17:09:35 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"
#include "lib/libft.h"

int	main(int ac, char **av)
{
	t_info	*info;

	if (ac == 1)
		exit (1);
	info = malloc(sizeof(*info));
	info->arr = &av[1];
	if (ac == 2)
	{
		info->arr = ft_split(av[1], ' ');
		if (!info->arr)
			return (1);
	}
	arg_check(info->arr);
	return (0);
}
