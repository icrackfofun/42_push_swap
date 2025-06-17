/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:00:15 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/17 17:11:38 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char c);
int	is_sign(char c);
int	str_check(char *str);
int	has_duplicates(char **arr);
int	arg_check(char **av);

typedef struct s_info
{
	char	**arr;
}	t_info;