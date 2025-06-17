/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:16:04 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/17 22:53:50 by psantos-         ###   ########.fr       */
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

void	sa(t_info *info)
{
	if (info->a.size > 1)
		swap_int(&info->a.head[info->a.size - 1],
			&info->a.head[info->a.size - 2]);
}

void	sb(t_info *info)
{
	if (info->b.size > 1)
		swap_int(&info->b.head[info->b.size - 1],
			&info->b.head[info->b.size - 2]);
}

