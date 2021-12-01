/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:52:41 by jonghapa          #+#    #+#             */
/*   Updated: 2021/12/01 10:56:47 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	idx;
	int		slen;

	slen = ft_strlen((char *)s);
	sub = (char *) malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	idx = 0;
	while (idx < len && (int) start < slen)
	{
		sub[idx] = s[start + idx];
		idx++;
	}
	sub[idx] = '\0';
	return (sub);
}
