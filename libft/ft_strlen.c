/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:57:53 by lisimony          #+#    #+#             */
/*   Updated: 2024/02/23 18:41:51 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char text1[] = "Hello";
	char text2[] = "Wonderland";

	printf("the length of 'Hello' is %d\n", ft_strlen(text1));
	printf("the length of 'Wonderland' is %d\n", ft_strlen(text2));
	return (0);
}
*/
