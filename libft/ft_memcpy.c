/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:19:23 by lisimony          #+#    #+#             */
/*   Updated: 2024/02/23 18:32:38 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*cdest;
	const unsigned char		*csrc;
	unsigned int			i;

	cdest = dest;
	csrc = src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
int	main(void)
{
	char src[] = "Luxembourg";
	char dest[20];

	ft_memcpy(dest, src, sizeof(src));

	printf("Copied String: %s", dest);
	return (0);
}
*/
