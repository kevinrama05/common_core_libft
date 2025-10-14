/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_calloc_strdup.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kerama <kerama@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:55:44 by kerama            #+#    #+#             */
/*   Updated: 2025/10/14 13:25:48 by kerama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (nptr[i] && ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total;
	size_t			i;
	unsigned char	*p;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	p = (unsigned char *)ptr;
	i = 0;
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*s1;
	size_t	i;

	len = ft_strlen(s);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s1)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s1[i] = s[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
int main(void)
{

    printf("Testing ft_atoi:\n");
    printf("ft_atoi(\"42\") = %d\n", ft_atoi("42"));
    printf("ft_atoi(\"   -42\") = %d\n", ft_atoi("   -42"));
    printf("ft_atoi(\"+123abc\") = %d\n", ft_atoi("+123abc"));
    printf("ft_atoi(\"abc123\") = %d\n", ft_atoi("abc123"));
    printf("ft_atoi(\"--12\") = %d\n", ft_atoi("--12"));
    printf("\n");

    printf("Testing ft_calloc:\n");
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (!arr)
    {
        printf("ft_calloc failed\n");
        return 1;
    }
    for (size_t i = 0; i < 5; i++)
        printf("arr[%zu] = %d\n", i, arr[i]);
    free(arr);
    printf("\n");

    printf("Testing ft_strdup:\n");
    char *original = "Hello, World!";
    char *copy = ft_strdup(original);
    if (!copy)
    {
        printf("ft_strdup failed\n");
        return 1;
    }
    printf("Original: %s\n", original);
    printf("Copy    : %s\n", copy);
    free(copy);

    return 0;
}
*/