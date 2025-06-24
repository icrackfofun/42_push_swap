/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_aux_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:54:15 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/25 00:06:30 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"
#include <stdio.h>

void rotate_b_to_top(t_info *info)
{
    int max_idx = get_max_index(&info->b);
    int size = info->b.size;

    if (max_idx >= size / 2)
    {
        while (max_idx < size - 1)
		{
            rb(info);
			max_idx++;
		}
    }
    else
    {
        while (max_idx >= 0)
        {
            rrb(info);
            max_idx--;
        }
    }
}

void	fill_buckets(t_info *info, int num_buckets, int min, int bucket_range)
{
	int	i;
	int	processed;
	int	size;
	int	val;
	int	lower_bound;
	int	upper_bound;

	i = 0;
	while (i < num_buckets)
	{
		lower_bound = min + i * bucket_range;
		upper_bound = min + (i + 1) * bucket_range;
		size = info->a.size;
		processed = 0;
		while (processed < size)
		{
			val = info->a.stack[info->a.size - 1];
			if (val >= lower_bound && val < upper_bound)
				pb(info);
			else
				ra(info);
			processed++;
		}
		i++;
	}
}

void	empty_buckets(t_info *info)
{
	while (info->b.size > 0)
	{
		rotate_b_to_top(info);
		pa(info);
	}
}

