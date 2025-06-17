/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 23:15:06 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/17 23:51:58 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"

void	swap_int(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	ra(t_info *info)
{
	int	i;
	int	top;

	if (info->a.size > 1)
	{
		top = info->a.stack[info->a.size - 1];
		i = info->a.size - 2;
		while (i >= 0)
		{
			info->a.stack[i + 1] = info->a.stack[i];
			i--;
		}
		info->a.stack[0] = top;
	}
	write(1, "ra\n", 3);
}

void	rb(t_info *info)
{
	int	i;
	int	top;

	if (info->b.size > 1)
	{
		top = info->b.stack[info->b.size - 1];
		i = info->b.size - 2;
		while (i >= 0)
		{
			info->b.stack[i + 1] = info->b.stack[i];
			i--;
		}
		info->b.stack[0] = top;
	}
	write(1, "rb\n", 3);
}

void	rr(t_info *info)
{
	ra(info);
	rb(info);
}

void	rra(t_info *info)
{
	int	bottom;
	int	i;

	if (info->a.size > 1)
	{
		bottom = info->a.stack[0];
		i = 1;
		while (i < info->a.size)
		{
			info->a.stack[i - 1] = info->a.stack[i];
			i++;
		}
		info->a.stack[info->a.size - 1] = bottom;
	}
	write(1, "rra\n", 4);
}
