/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psantos- <psantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:53:43 by psantos-          #+#    #+#             */
/*   Updated: 2025/07/01 20:34:08 by psantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

size_t		ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t		ft_strlen(const char *str);
void		*ft_calloc(size_t nmemb, size_t size);
void		*ft_memset(void *ptr, int value, size_t num);
long int	ft_atoi(const char *str);
char		*ft_strdup(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);

#endif