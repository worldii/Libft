/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:20:59 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/29 18:20:27 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char s, char const *set)
{
	int	sidx;

	sidx = 0;
	while (set[sidx])
		if (set[sidx++] == s)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1len;
	char	*trimmed;
	int		tidx;
	int		sidx;

	tidx = 0;
	sidx = 0;
	s1len = ft_strlen((char *)s1);
	trimmed = (char *) malloc (sizeof(char) * s1len + 1);
	if (trimmed == NULL)
		return (NULL);
	while (s1[s1len - 1] && ft_ischarset(s1[s1len - 1], set) == 1)
		s1len--;
	while (s1[sidx] && ft_ischarset(s1[sidx], set) == 1)
		sidx++;
	while (sidx < s1len)
		trimmed[tidx++] = s1[sidx++];
	return (trimmed);
}
