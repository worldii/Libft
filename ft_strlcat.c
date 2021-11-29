/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 05:29:48 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/29 15:08:20 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	idx;

	idx = -1;
	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	if (dstlen >= len)
		return (len + srclen);
	if (len && dstlen < len - 1)
	{
		while (dstlen + ++idx < len - 1 && src[idx])
			dst[dstlen + idx] = src[idx];
		dst[dstlen + idx] = 0;
	}
	return (dstlen + srclen);
}
/*
int main (void)

*/
