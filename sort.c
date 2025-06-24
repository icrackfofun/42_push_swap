/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:26:42 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/25 00:07:28 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"
#include <stdio.h>

void	sort_two(t_info *info)
{
	int	*s;
	int	last;

	s = info->a.stack;
	last = info->a.size - 1;
	if (s[last] > s[last -1])
		sa(info);
}

void	sort_three(t_info *info)
{
	int	*s;

	s = info->a.stack;
	if (s[2] > s[1] && s[1] < s[0] && s[2] < s[0])
		sa(info);
	else if (s[2] > s[1] && s[1] > s[0])
	{
		sa(info);
		rra(info);
	}
	else if (s[2] > s[1] && s[1] < s[0] && s[2] > s[0])
		ra(info);
	else if (s[2] < s[1] && s[1] > s[0] && s[2] < s[0])
	{
		sa(info);
		ra(info);
	}
	else if (s[2] < s[1] && s[1] > s[0] && s[2] > s[0])
		rra(info);
}

void	sort_five(t_info *info)
{
	while (info->a.size > 3)
		push_min_to_b(info);
	sort_three(info);
	while (info->b.size > 0)
		pa(info);
}

void	sort_bucket(t_info *info, int num_buckets)
{
	int	min;
	int	max;
	int	range;
	int	bucket_range;

	min = get_min_value(&info->a);
	max = get_max_value(&info->a);
	range = max - min + 1;
	bucket_range = range / num_buckets + 1;
	fill_buckets(info, num_buckets, min, bucket_range);
	empty_buckets(info);
}

void	sort(t_info *info)
{
	int i;

    i = info->a.size - 1;
    while (info->a.stack[i] < info->a.stack[i - 1] && i > 0)
    {
        i--;
    }
	if (i == 0)
	{
		free_info(info);
		exit (1);
	}
	if (info->a.size == 2)
		sort_two(info);
	else if (info->a.size == 3)
		sort_three(info);
	else if (info->a.size <= 5)
		sort_five(info);
	else
		sort_bucket(info, 5);
}
