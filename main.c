/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:14:19 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/24 15:26:58 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"
#include "lib/libft.h"

int	main(int ac, char **av)
{
	t_info	info;

	if (ac == 1)
		exit (1);
	init_info(ac, av, &info);
	sort(&info);
	free_info(&info);
	return (0);
}
