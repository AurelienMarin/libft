/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumarin <aumarin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 01:01:54 by aumarin           #+#    #+#             */
/*   Updated: 2021/12/30 02:10:27 by aumarin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_str == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		new_str[i] = (f)(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
