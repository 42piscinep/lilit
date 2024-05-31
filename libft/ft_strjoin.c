/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:40:07 by lisimony          #+#    #+#             */
/*   Updated: 2024/02/27 13:43:28 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			len_s1;
	int			len_s2;
	char		*new_string;
	char		*new_string_ptr;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = 0;
	len_s2 = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_string = (char *)malloc((len_s1 + len_s2 + 1) * sizeof (char));
	if (!new_string)
		return (NULL);
	new_string_ptr = new_string;
	while (*s1)
		*new_string++ = *s1++;
	while (*s2)
		*new_string++ = *s2++;
	*new_string = '\0';
	return (new_string_ptr);
}
/*
#include <stdio.h>
int	main()
{
	char	s1[] = "Hello ";
	char	s2[] = "World";
	printf("%s \n", ft_strjoin(s1, s2));
	return 0;
}
*/
