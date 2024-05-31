/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:59:55 by lisimony          #+#    #+#             */
/*   Updated: 2024/05/20 16:12:06 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

const char	*trim_start(const char *s1, const char *set)
{
	while (s1 && is_in_set(*s1, set))
		s1++;
	return (s1);
}

const char	*trim_end(const char *s1, const char *set)
{
	int			len;
	const char	*end;

	len = 0;
	end = s1;
	while (*end)
	{
		end++;
		len++;
	}
	while (len > 0 && is_in_set(*(end - 1), set))
	{
		end--;
		len--;
	}
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char		*trimmed_str;
	const char	*start;
	const char	*end;
	int			len;
	int			i;

	if (!s1)
		return (NULL);
	start = trim_start(s1, set);
	end = trim_end(s1, set);
	if (end < start)
		len = 0;
	else
		len = end - start;
	i = 0;
	trimmed_str = (char *)malloc((len + 1) * sizeof (char));
	if (!trimmed_str)
		return (NULL);
	while (start < end)
	{
		trimmed_str[i++] = *start++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
/*
#include <stdio.h>
int	main()
{
	char	s1[] = "       Hello World ";
	char	set[] = " ";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}
*/
