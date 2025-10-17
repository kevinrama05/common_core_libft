/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerama <kerama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:29:33 by kerama            #+#    #+#             */
/*   Updated: 2025/10/17 10:24:58 by kerama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*
int	main(void)
{
	char	*s = "Hello, World!";
	char	*sub;

	printf("Testing ft_substr:\n\n");

	// Test 1: Normal substring in the middle
	sub = ft_substr(s, 7, 5);
	printf("ft_substr(\"%s\", 7, 5) = \"%s\"\n", s, sub);
	free(sub);

	// Test 2: Start from the beginning
	sub = ft_substr(s, 0, 5);
	printf("ft_substr(\"%s\", 0, 5) = \"%s\"\n", s, sub);
	free(sub);

	// Test 3: Length longer than remaining string
	sub = ft_substr(s, 10, 10);
	printf("ft_substr(\"%s\", 10, 10) = \"%s\"\n", s, sub);
	free(sub);

	// Test 4: Start beyond the string length
	sub = ft_substr(s, 50, 5);
	printf("ft_substr(\"%s\", 50, 5) = \"%s\"\n", s, sub);
	free(sub);

	// Test 5: Empty string
	sub = ft_substr("", 0, 5);
	printf("ft_substr(\"\", 0, 5) = \"%s\"\n", sub);
	free(sub);

	// Test 6: Length 0
	sub = ft_substr(s, 5, 0);
	printf("ft_substr(\"%s\", 5, 0) = \"%s\"\n", s, sub);
	free(sub);

	return (0);
}
*/