/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funct_one_to_five.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrama10 <ekrama10@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:58:06 by ekrama10          #+#    #+#             */
/*   Updated: 2025/10/13 23:33:39 by ekrama10         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int main(void)
{
    char test_chars[] = {100, 'A', 'z', '0', '9', '!', ' ', '\n', 127, -1, 200};
    int n = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < n; i++)
    {
        char c = test_chars[i];
        printf("Testing character: ");
        if (c >= 32 && c <= 126)
            printf("'%c' (ASCII %d)\n", c, (unsigned char)c);
        else
            printf("non-printable (ASCII %d)\n", (unsigned char)c);

        printf("ft_isalpha: %d\n", ft_isalpha(c));
        printf("ft_isdigit: %d\n", ft_isdigit(c));
        printf("ft_isalnum: %d\n", ft_isalnum(c));
        printf("ft_isascii: %d\n", ft_isascii(c));
        printf("ft_isprint: %d\n", ft_isprint(c));
        printf("------------------------\n");
    }

    return 0;
}
*/
