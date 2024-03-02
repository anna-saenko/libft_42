/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:49:20 by asaenko           #+#    #+#             */
/*   Updated: 2024/02/27 13:49:22 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *s_cpy;

	s_cpy = (char *)s;
	while (*s_cpy)
	{
		if (*s_cpy == c)
		{
			return ((char *)s_cpy);
		}
		s_cpy++;
	}
	if (*s_cpy == '\0' && c == '\0')
		return ((char *)s_cpy);
	return (NULL);
}
