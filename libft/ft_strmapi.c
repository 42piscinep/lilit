/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:08:54 by lisimony          #+#    #+#             */
/*   Updated: 2024/02/29 16:06:40 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*result;

	if (!s)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof (char));
	if (!str)
		return (NULL);
	i = 0;
	result = str;
	while (*s)
	{
		*str = f(i, *s);
		str++;
		i++;
		s++;
	}
	*str = '\0';
	return (result);
}
/*
#include <ctype.h>
#include <stdio.h>
char uppercase(unsigned int index, char c)
{
    (void)index;
    return toupper(c);
}


int main()
{
   char *result = ft_strmapi("Hello, World!", &uppercase);

    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Original string: %s\n", "Hello, World!");
    printf("Transformed string: %s\n", result);

    free(result);

    return 0;
}
*/
