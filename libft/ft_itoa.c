/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:13:25 by lisimony          #+#    #+#             */
/*   Updated: 2024/03/01 15:44:43 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_digits(int n)
{
	int	i;

	i = 0;
	if (n < 1)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	long	conv_abs(long long n)
{
	long	i;

	i = 1;
	if (n < 0)
		i = i * (-n);
	else
		i = i * n;
	return (i);
}

static char	*create_str(size_t n)
{
	char	*str;

	str = (char *)malloc((n + 1) * sizeof (char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	int				ndigits;
	char			*str;
	int				sign;
	unsigned int	num;

	sign = 0;
	if (n < 0)
		sign = 1;
	ndigits = count_digits(n);
	str = create_str(ndigits);
	if (!str)
		return (NULL);
	*(str + ndigits) = '\0';
	num = conv_abs(n);
	while (ndigits--)
	{
		*(str + ndigits) = num % 10 + '0';
		num /= 10;
	}
	if (sign)
		*str = '-';
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}
*/
