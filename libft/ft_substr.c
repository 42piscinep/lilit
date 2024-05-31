/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:31:26 by lisimony          #+#    #+#             */
/*   Updated: 2024/03/05 15:00:16 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	size_t			length;

	substring = NULL;
	length = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= (length))
	{
		substring = ft_calloc(1, 1);
		return (substring);
	}
	else if (len > (length - start))
		len = length - start;
	substring = ft_calloc((len + 1), sizeof(char));
	if (!substring)
		return (NULL);
	s = s + start;
	ft_memcpy(substring, s, len);
	*(substring + len) = '\0';
	return (substring);
}
/*
#include <stdio.h>

int	main()
{	
	char s[] = "Luxembourg";
	printf("%s", ft_substr(s, 5, 4));
	return (0);
}	
*/
