/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:00:15 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/24 15:16:24 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_stack
{
	int	*stack;
	int	size;
}	t_stack;

typedef struct s_ops
{
	char	*op;
	void	*next;
}	t_ops;

typedef struct s_info
{
	char	**arr;
	int		must_free;
	t_stack	a;
	t_stack	b;
	t_ops	ops;
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
void	push_min_to_b(t_info *info);
void	sort(t_info *info);
void	sort_three(t_info *info);
void	sort_five(t_info *info);
