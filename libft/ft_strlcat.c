/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:15:51 by lisimony          #+#    #+#             */
/*   Updated: 2024/03/04 17:44:53 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlength;
	size_t	slength;

	i = 0;
	dlength = 0;
	slength = 0;
	while (src [slength] != '\0')
		slength++;
	while (dst[dlength] != '\0' && dlength < size)
		dlength++;
	if (size == 0)
		return (slength);
	if (dlength >= size)
		return (slength + size);
	while (src[i] != '\0' && (dlength + i) < (size - 1))
	{
		dst[dlength + i] = src[i];
		i++;
	}
	dst[dlength + i] = '\0';
	return (dlength + slength);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char dst[15] = "Hello ";
	char src[] = "Luxembourg";
	int i = 0;
	printf("%zu \n", ft_strlcat(dst, src, ft_strlen(dst) + 3));
	printf("%s", dst);



	char dst1[15] = "Hello ";
        char src1[] = "Lux";
        int j = 0;
	printf("\n%zu \n", strlcat(dst1, src, ft_strlen(dst) + 3));
	printf("%s", dst);
        return 0;
}
*/
