/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:04:49 by psantos-          #+#    #+#             */
/*   Updated: 2025/06/24 17:19:24 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2)
{
	size_t	i;

	if (!*str1 || !*str2)
		return (-1);
	i = 0;
	while (str1[i] && str1[i] == str2[i])
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

/*int main (void){
	char str_1 [] = "abcd";
	char str_2 [] = "ab";
	int size = 3;
	unsigned int result = ft_strncmp(str_1, str_2, size);

	if (result == 0){
		printf ("The '%i' first bytes of '%s' and 
		'%s' are the same", size, str_1, str_2);
	}
	if (result > 0){
		printf ("The '%i' first bytes of '%s' are 
		bigger than '%s'", size, str_1, str_2);
	}
	if (result < 0){
		printf ("The '%i' first bytes of '%s' are 
		smaller than '%s'", size, str_1, str_2);
	}
}*/