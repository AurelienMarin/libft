/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 13:22:21 by aumarin           #+#    #+#             */
/*   Updated: 2022/01/15 02:50:24 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && is_char_in_set(s1[start], set))
		start++;
	return (start);
}

static size_t	get_end(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (s1[end] && is_char_in_set(s1[end], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimd_str;
	size_t	len;
	size_t	i;
	size_t	j;

	j = 0;
	i = get_start(s1, set);
	if (get_start(s1, set) == ft_strlen(s1))
		return (ft_strdup(""));
	len = get_end(s1, set) - get_start(s1, set) + 1;
	trimd_str = malloc(sizeof(char) * (len + 1));
	if (trimd_str == NULL)
		return (NULL);
	while (i <= get_end(s1, set))
	{
		trimd_str[j] = s1[i];
		j++;
		i++;
	}
	trimd_str[j] = '\0';
	return (trimd_str);
}
