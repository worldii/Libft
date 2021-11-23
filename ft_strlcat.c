/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 05:29:48 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/24 05:52:59 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int len)
{
	const unsigned int	srclen;
	const unsigned int	dstlen;
	unsigned int		didx;
	unsigned int		sidx;

	didx = 0;
	sidx = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (srclen == len)
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
