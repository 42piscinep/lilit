/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:56:06 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 16:50:49 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (size && nmemb > 2147483647 / size)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	int	*arr;
	arr = (int *)ft_calloc(5, sizeof (int));

	if (!arr)
	{
		printf("calloc failed \n");
		return 1;
	}
	printf ("%p \n", arr);
	free (arr);
	return 0;
}
*/
