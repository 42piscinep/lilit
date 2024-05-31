/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:56:25 by lisimony          #+#    #+#             */
/*   Updated: 2024/03/05 17:47:13 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;

	length = ft_strlen(big);
	i = 0;
	if (!little && !len)
		return (NULL);
	if (len > length)
		len = length;
	if (*little == '\0')
		return ((char *)big);
	while (i < len)
	{
		j = 0;
		while (big[i + j] == little[j]
			&& little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	printf ("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "sit", 10));	

	return (0);

}
*/
