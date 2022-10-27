/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:29:01 by aumarin           #+#    #+#             */
/*   Updated: 2022/10/27 23:08:39 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	counter;
	size_t	i;

	i = 0;
	counter = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
		{
			counter++;
			while (s[i] != c)
				i++;
		}
		if (i == (ft_strlen(s) - 1) && s[i] != c)
			counter++;
		i++;
	}
	return (counter);
}

static char	*ft_dupword(char const *s, size_t start, size_t end)
{
	size_t	word_len;
	char	*word;
	size_t	i;

	i = 0;
	word_len = end - start;
	word = malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**free_all(char **array, size_t j)
{
	while ((int)j >= 0)
	{
		free(array[j]);
		j--;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**splitted;
	int		start;

	splitted = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (splitted == NULL)
		return (NULL);
	i = -1;
	j = -1;
	start = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			splitted[++j] = ft_dupword(s, start, i);
			if (splitted[j] == NULL)
				return (free_all(splitted, j));
			start = -1;
		}
	}
	splitted[j + 1] = 0;
	return (splitted);
}
