/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:52:22 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 17:06:59 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*nptr == 32) || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if ((*nptr == '-') || (*nptr == '+'))
	{
		if (*nptr == '-')
			sign = (-sign);
		nptr++;
	}
	while ((*nptr >= '0') && (*nptr <= '9'))
	{
		result = (result * 10) + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char nptr[] = "   	+19acbdre4567";
	printf("%d \n", ft_atoi(nptr));
	printf("%d \n", atoi(nptr));
	return (0);
}
*/
