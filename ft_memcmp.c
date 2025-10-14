/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerama <kerama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:21:05 by kerama            #+#    #+#             */
/*   Updated: 2025/10/14 14:21:26 by kerama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s21;

	i = 0;
	s11 = (unsigned char *)s1;
	s21 = (unsigned char *)s2;
	while (s11[i] && s21[i] && s11[i] == s21[i] && i < n)
		i++;
	return (s11[i] - s21[i]);
}
