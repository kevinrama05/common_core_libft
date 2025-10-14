/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerama <kerama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:19:38 by kerama            #+#    #+#             */
/*   Updated: 2025/10/14 14:20:51 by kerama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	ch;

	if (!s)
		return (NULL);
	i = 0;
	s1 = (unsigned char *)s;
	ch = (unsigned char)c;
	while (s1[i])
	{
		if (s1[i] == ch)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}
