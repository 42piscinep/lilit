/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:38:26 by lisimony          #+#    #+#             */
/*   Updated: 2024/02/23 18:38:50 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		cu;

	str = s;
	cu = c;
	while (n > 0)
	{
		if (*str == cu)
		{
			return ((void *)str);
		}
		str++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
    char s[] = "Luxembourg";
    printf("%s\n", ft_memchr(s, 'e', sizeof(s)));
    return 0;
}
*/
