/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:26:42 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/24 15:21:08 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"
#include "lib/libft.h"

int	get_min_index(t_stack *stack)
{
	int	i;
	int	min;
	int	min_i;

	i = 0;
	min = stack->stack[0];
	min_i = 0;
	while (++i < stack->size)
	{
		if (stack->stack[i] < min)
		{
			min = stack->stack[i];
			min_i = i;
		}
	}
	return (min_i);
}

void	push_min_to_b(t_info *info)
{
	int	min_i;

	min_i = get_min_index(&info->a);
	if (min_i == info->a.size - 2)
		ra(info);
	else if (min_i == info->a.size - 3)
	{
		ra(info);
		ra(info);
	}
	else if (min_i == 0)
		rra(info);
	else if (min_i == 1)
	{
		rra(info);
		rra(info);
	}
	pb(info);
}

void	sort_three(t_info *info)
{
	int	*s;
	int	last;

	s = info->a.stack;
	last = info->a.size - 1;
	if (s[last] > s[last - 1] && s[last - 1] < s[last - 2]
		&& s[last] < s[last - 2])
		sa(info);
	else if (s[last] > s[last - 1] && s[last - 1] > s[last - 2])
	{
		sa(info);
		rra(info);
	}
	else if (s[last] > s[last - 1] && s[last - 1] < s[last - 2]
		&& s[last] > s[last - 2])
		ra(info);
	else if (s[last] < s[last - 1] && s[last - 1] > s[last - 2]
		&& s[last] < s[last - 2])
	{
		sa(info);
		ra(info);
	}
	else if (s[last] < s[last - 1] && s[last - 1] > s[last - 2]
		&& s[last] > s[last - 2])
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

void	sort(t_info *info)
{
	if (info->a.size <= 3)
		sort_three(info);
	else if (info->a.size <= 5)
		sort_five(info);
}
