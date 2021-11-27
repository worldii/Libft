/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 05:29:48 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/27 20:31:07 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	didx;
	size_t	sidx;

	didx = 0;
	sidx = 0;
	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	if (dstlen > len)
		dstlen = len;
	if (dstlen == len)
		return (len + srclen);
	if (srclen + dstlen < len)
	{
		while (sidx < srclen)
			dst[dstlen + didx++] = src[sidx++];
	}
	else
	{
		while (didx + 1 < len)
			dst[dstlen + didx++] = src[sidx++];
		dst[dstlen + len - 1] = 0;
	}
	return (dstlen + srclen);
}
/*
int main (void)

*/
