/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:56:11 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/26 15:15:44 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long long n)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		size = 1;
		return (size);
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long long	temp;
	int			size;
	char		*str;

	temp = n;
	size = 0;
	if (n < 0)
	{
		temp = -n;
		size++;
	}
	size += get_len(temp);
	str = (char *) malloc (sizeof(char) * (size + 1));
	str[size] = '\0';
	while (temp > 0)
	{		
		str[--size] = temp % 10 + '0';
		temp = temp / 10;
	}
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
#include<stdio.h>
int main(void)
{
	char *temp = ft_itoa(+1231);
	printf("%s", temp);
}*/
