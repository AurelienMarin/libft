/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:41:50 by aumarin           #+#    #+#             */
/*   Updated: 2022/01/13 06:01:27 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	total_len;
	size_t	i;

	i = 0;
	total_len = (ft_strlen(s1) + ft_strlen(s2));
	new_str = malloc(sizeof(char) * (total_len + 1));
	if (new_str == NULL)
		return (NULL);
	while (i < total_len)
	{
		if (i < ft_strlen(s1))
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
