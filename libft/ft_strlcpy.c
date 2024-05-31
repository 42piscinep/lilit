/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:22:51 by lisimony          #+#    #+#             */
/*   Updated: 2024/03/04 10:44:23 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	if (!size)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char src[] = "Luxembourg";
	char dst[11];
	int	i;
	
	i = 0;
	printf("%zu \n", ft_strlcpy(dst, "1", 0));
	while (dst[i] != '\0')
	{
		printf("%c", dst[i]);
       		i++;
	}
	printf("\n%zu ", strlcpy(dst, "1", 0));

	return (0);	
}
*/
