/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:04:47 by lisimony          #+#    #+#             */
/*   Updated: 2024/02/23 18:39:22 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "Hello";
	char s2[] = "Helloxxx";
	char s3[] = "Aello";
	printf("%d \n", ft_memcmp(s1, s2, 7));
	printf("%d \n", ft_memcmp(s1, s3, 7));

	printf("%d \n", memcmp(s1, s2, 7));
        printf("%d \n", memcmp(s1, s3, 7));

	return 0;
}
*/
