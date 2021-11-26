/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:20:59 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/26 15:37:00 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1len;
	char	*trimmed;
	int		sidx;
	int		flag;
	int		tidx;

	flag = 1;
	tidx = 0;
	s1len = ft_strlen(s1);
	trimmed = (char *) malloc (sizeof(char) * s1len + 1);
	if (trimmed == NULL)
		return (NULL);
	while (*s1)
	{
		sidx = 0;
		while (set[sidx])
			if (set[sidx++] == *s1)
				flag = 0;
		if (flag == 1)
			trimmed[tidx++] = *s1;
		s1++;
	}
	return (trimmed);
}
