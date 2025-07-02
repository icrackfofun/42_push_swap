/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_aux_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:54:15 by psantos-          #+#    #+#             */
/*   Updated: 2025/07/02 11:17:39 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"
#include <stdio.h>

void	rotate_b_to_top(t_info *info)
{
	int	max_idx;
	int	size;

	size = info->b.size;
	max_idx = get_max_index(&info->b);
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

void	to_top_a(t_info *info, int index)
{
	int	size;

	size = info->a.size;
	if (index >= size / 2)
	{
		while (index++ < size - 1)
			ra(info);
	}
	else
	{
		while (index-- >= 0)
			rra(info);
	}
}

int	find_in_bucket(t_stack *stack, int lower, int upper)
{
	int	i;

	i = stack->size - 1;
	while (i >= 0)
	{
		if (stack->stack[i] >= lower && stack->stack[i] < upper)
			return (i);
		i--;
	}
	return (-1);
}

void	fill_buckets(t_info *info, int num_buckets, int min, int bucket_range)
{
	int	i;
	int	lower;
	int	upper;
	int	idx;

	i = 0;
	while (i < num_buckets)
	{
		lower = min + i * bucket_range;
		upper = min + (i + 1) * bucket_range;
		idx = find_in_bucket(&info->a, lower, upper);
		while (idx != -1)
		{
			to_top_a(info, idx);
			pb(info);
			idx = find_in_bucket(&info->a, lower, upper);
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
