/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:18:07 by lisimony          #+#    #+#             */
/*   Updated: 2024/02/26 15:49:05 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	char	*initial_dest;

	initial_dest = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (initial_dest);
}

char	*ft_strdup(const char *s)
{
	unsigned int	len;
	char			*dest;

	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, s));
}
/*
#include <string.h>
int	main()
{
	char text[] = "Hello";
	char	*result;

	result = ft_strdup(text);
	printf("%s", result);
	free(result);
	return (0);
}
*/
