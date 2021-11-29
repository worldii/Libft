/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:08:40 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/29 18:23:35 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_str(const char *big, const char *little, size_t len)
{
	size_t	idx;

	idx = 0;
	while (idx < len && *big && *little)
	{
		if (*big != *little)
			return (0);
		big++;
		little++;
		idx++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx;
	int		llen;

	idx = 0;
	llen = 0;
	if (little == 0)
		return ((char *) big);
	if (len == 0)
		return (0);
	llen = ft_strlen((char *)little);
	while (idx + llen < len && big[idx] != 0)
	{
		if (find_str(big + idx, little, len) == 1)
			return ((char *) big + idx);
		idx++;
	}
	return (0);
}

/*
#include<stdio.h>
int main(void)
{
	char big[] = "go go yogurt";
char little[] = "gu";
printf("return(gurt) : %s\n", ft_strnstr(big,little,14));	// return(gurt) : gurt
printf("return(null) : %s\n", ft_strnstr(big,little,9));	//return(null) : null
}*/
