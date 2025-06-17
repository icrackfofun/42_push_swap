/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:16:04 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/17 23:37:51 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"

void	sa(t_info *info)
{
	if (info->a.size > 1)
	{
		swap_int(&info->a.stack[info->a.size - 1],
			&info->a.stack[info->a.size - 2]);
		write(1, "sa\n", 3);
	}
}

void	sb(t_info *info)
{
	if (info->b.size > 1)
	{
		swap_int(&info->b.stack[info->b.size - 1],
			&info->b.stack[info->b.size - 2]);
		write(1, "sb\n", 3);
	}
}

void	ss(t_info *info)
{
	sa(info);
	sb(info);
}

void	pa(t_info *info)
{
	if (info->b.size > 0)
	{
		info->a.stack[info->a.size] = info->b.stack[info->b.size - 1];
		info->a.size++;
		info->b.size--;
	}
	write(1, "pa\n", 3);
}

void	pb(t_info *info)
{
	if (info->a.size > 0)
	{
		info->b.stack[info->b.size] = info->a.stack[info->a.size - 1];
		info->b.size++;
		info->a.size--;
	}
	write(1, "pb\n", 3);
}
