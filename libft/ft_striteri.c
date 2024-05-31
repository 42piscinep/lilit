/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:09:05 by lisimony          #+#    #+#             */
/*   Updated: 2024/02/29 16:15:57 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
/*
#include <ctype.h>
#include <stdio.h>
void uppercase(unsigned int index, char *c)
{
   	(void)index;
       	if (c)
        *c = toupper(*c);
}

int main()
{
    char str[] = "Hello, World!";
    ft_striteri(str, &uppercase);

    printf("Transformed string: %s\n", str);

    return 0;
}
*/
