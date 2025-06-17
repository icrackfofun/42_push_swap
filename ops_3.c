/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 23:40:41 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/17 23:51:42 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"

void	rrb(t_info *info)
{
	int	bottom;
	int	i;

	if (info->b.size > 1)
	{
		bottom = info->b.stack[0];
		i = 1;
		while (i < info->b.size)
		{
			info->b.stack[i - 1] = info->b.stack[i];
			i++;
		}
		info->b.stack[info->b.size - 1] = bottom;
	}
	write(1, "rrb\n", 4);
}

void	rrr(t_info *info)
{
	rra(info);
	rrb(info);
}
