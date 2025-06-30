/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:00:15 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/30 11:08:31 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_stack
{
	int	*stack;
	int	size;
}	t_stack;

typedef struct s_info
{
	char	**arr;
	int		must_free;
	t_stack	a;
	t_stack	b;
}	t_info;

int		is_digit(char c);
int		is_sign(char c);
int		str_check(char *str);
int		has_duplicates(char **arr);
void	arg_check(char **av);
void	create_stacks(char **arr, t_info *info);
void	init_info(int ac, char **av, t_info *info);
void	free_info(t_info *info);
void	swap_int(int *x, int *y);
void	sa(t_info *info);
void	sb(t_info *info);
void	pa(t_info *info);
void	pb(t_info *info);
void	ra(t_info *info);
void	rb(t_info *info);
void	rr(t_info *info);
void	rra(t_info *info);
void	rrb(t_info *info);
void	rrr(t_info *info);
int		get_min_index(t_stack *stack);
int		get_max_index(t_stack *stack);
int		get_min_value(t_stack *s);
int		get_max_value(t_stack *s);
void	push_min_to_b(t_info *info);
void	rotate_b_to_top(t_info *info);
void	to_top_a(t_info *info, int index);
int		find_in_bucket(t_stack *stack, int lower, int upper);
void	fill_buckets(t_info *info, int num_buckets, int min, int bucket_range);
void	empty_buckets(t_info *info);
void	sort(t_info *info);
void	sort_two(t_info *info);
void	sort_three(t_info *info);
void	sort_five(t_info *info);
void	sort_bucket(t_info *info, int num_buckets);
