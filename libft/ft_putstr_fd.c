/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:15:55 by lisimony          #+#    #+#             */
/*   Updated: 2024/03/01 15:21:11 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int	main()
{
	char str[] = "Hello, Luxembourg!";
	ft_putstr_fd(str, 1);

	char str1[] = "Error: Message";
	ft_putstr_fd(str1, 2);

}
*/
