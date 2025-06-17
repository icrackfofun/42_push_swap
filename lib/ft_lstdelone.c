/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:45:20 by psantos-          #+#    #+#             */
/*   Updated: 2025/04/21 23:34:54 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Takes a node as parameter and frees its content
using the function ’del’.  Free the node itself but
does NOT free the next node.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del (lst->content);
	free (lst);
}
