/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:06:05 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/26 15:44:45 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		idx;
	int		s1len;
	int		s2len;

	s1len = ft_strlen((char *)s1);
	s2len = ft_strlen((char *)s2);
	new = (char *) malloc(sizeof(char) * (s1len + s2len - 1));
	if (new == NULL)
		return (NULL);
	idx = 0;
	while (*s1)
	{
		new[idx++] = *s1;
		s1++;
	}
	while (*s2)
	{
		new[idx++] = *s2;
		s2++;
	}
	new[idx] = '\0';
	return (new);
}
