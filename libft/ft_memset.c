/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:21:05 by lisimony          #+#    #+#             */
/*   Updated: 2024/02/23 18:31:34 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (str);
}
/*
#include <string.h>
int	main()
{
	char text[20] ="Programming";
	ft_memset(text+11, 'A', 5);
	printf("%s", text);
	return (0);	
}
*/
