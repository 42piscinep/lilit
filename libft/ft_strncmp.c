/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:39:20 by lisimony          #+#    #+#             */
/*   Updated: 2024/03/05 17:49:14 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char s1[] = "test\200";
	char s2[] = "test\0";
	char s3[] = "Aello";
	printf("%d \n", ft_strncmp(s1, s2, 6));
	printf("%d \n", ft_strncmp(s1, s3, 6));
	printf("%d \n", strncmp(s1, s2, 6));

	return 0;
}
*/
