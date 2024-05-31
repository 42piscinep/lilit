/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisimony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:03:53 by lisimony          #+#    #+#             */
/*   Updated: 2024/03/05 13:13:55 by lisimony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *str, char c)
{
	int	n_of_words;

	n_of_words = 0;
	while (*str)
	{
		if (*str != c)
		{
			while (*str != c && *str)
				str++;
			n_of_words++;
		}
		else
			str++;
	}
	return (n_of_words);
}

static char	*ft_divide(const char *str, char c)
{
	char	*dev;
	int		i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	dev = (char *)malloc((i + 1) * sizeof (char));
	if (!dev)
		return (NULL);
	ft_strlcpy(dev, str, i + 1);
	return (dev);
}

static char	**init_split_array(const char *s, char c, int *rep)
{
	char	**split;

	*rep = ft_wordcount(s, c);
	split = (char **)malloc((*rep + 1) * sizeof(char *));
	if (!split)
	{
		return (NULL);
	}
	split[*rep] = (NULL);
	return (split);
}

static void	fill_split_array(char **split, const char *s, char c, int rep)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (index < rep)
	{
		while (s[i] == c)
			i++;
		split[index] = ft_divide(s + i, c);
		if (!split[index])
		{
			while (index-- > 0)
				free(split[index]);
			free(split);
			split = NULL;
			return ;
		}
		i += ft_strlen(split[index]) + 1;
		index++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		rep;
	char	**split;

	if (!s)
		return (NULL);
	split = init_split_array(s, c, &rep);
	if (!split)
		return (NULL);
	fill_split_array(split, s, c, rep);
	if (!split)
		return (NULL);
	return (split);
}
/*
#include <stdio.h>

int	main()
{	int i; 
	char s[] = "            Text1 42 42  	";
	char c = ' ';
	i = 0;
	char **str = ft_split(s, c);
	while(str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}
*/
