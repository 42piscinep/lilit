/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:09:53 by lisimony          #+#    #+#             */
/*   Updated: 2024/03/04 17:44:02 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*cdest;
	unsigned const char		*csrc;
	unsigned int			i;

	cdest = dest;
	csrc = src;
	i = 0;
	if ((!dest && !src) || (dest == src))
		return (dest);
	if (dest <= src)
	{
		while (n--)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = n;
		while (i--)
			cdest[i] = csrc[i];
	}
	return (dest);
}
/*
#include <string.h>
int	main(void)
{
	char src[] = "Luxembourg";
	char dest[10];
	ft_memmove(dest, src, 4);
	printf("%s", dest);
	return (0);	
}
*/
