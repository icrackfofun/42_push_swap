/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:00:15 by psantos-          #+#    #+#             */
/*   Updated: 2025/07/01 21:00:51 by psantos-         ###   ########.fr       */
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

//Main
void	free_info(t_info *info);
int		is_all_spaces(char *str);
void	check_empty_or_space_args(int ac, char **av);

//Errors
int		is_digit(char c);
int		is_sign(char c);
int		str_check(char *str);
int		has_duplicates(char **arr);
void	arg_check(char **av);

//Init_structs
void	init_single_arg(char **av, t_info *info);
void	init_multi_args(int ac, char **av, t_info *info);
void	append_to_joined(char **joined, char *arg);
void	create_stacks(char **arr, t_info *info);
void	init_info(int ac, char **av, t_info *info);

//Ops
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

//Sort_aux_1
int		get_min_index(t_stack *stack);
int		get_max_index(t_stack *stack);
int		get_min_value(t_stack *s);
int		get_max_value(t_stack *s);
void	push_min_to_b(t_info *info);

//Sort_aux_2
void	rotate_b_to_top(t_info *info);
void	to_top_a(t_info *info, int index);
int		find_in_bucket(t_stack *stack, int lower, int upper);
void	fill_buckets(t_info *info, int num_buckets, int min, int bucket_range);
void	empty_buckets(t_info *info);

//Sort
void	sort(t_info *info);
void	sort_two(t_info *info);
void	sort_three(t_info *info);
void	sort_five(t_info *info);
void	sort_bucket(t_info *info, int num_buckets);
