/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_aux_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:04:33 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/30 10:52:48 by psantos-         ###   ########.fr       */
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

int	get_max_index(t_stack *stack)
{
	int	i;
	int	max;
	int	max_i;

	i = 0;
	max = stack->stack[0];
	max_i = 0;
	while (++i < stack->size)
	{
		if (stack->stack[i] > max)
		{
			max = stack->stack[i];
			max_i = i;
		}
	}
	return (max_i);
}

int	get_min_value(t_stack *s)
{
	int	i;
	int	min;

	i = 0;
	min = s->stack[0];
	while (++i < s->size)
		if (s->stack[i] < min)
			min = s->stack[i];
	return (min);
}

int	get_max_value(t_stack *s)
{
	int	i;
	int	max;

	i = 0;
	max = s->stack[0];
	while (++i < s->size)
		if (s->stack[i] > max)
			max = s->stack[i];
	return (max);
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
