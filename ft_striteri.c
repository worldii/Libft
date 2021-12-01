/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:03:42 by jonghapa          #+#    #+#             */
/*   Updated: 2021/12/01 13:29:11 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	idx;

	idx = 0;
	while (s[idx])
	{
		f(idx, &s[idx]);
		idx++;
	}
}
/*
void ft_upper (unsigned int i , char *s)
{
	if ('a' <= s[i] && s[i] <= 'z')
		s[i] -= ('a' - 'A');
}
#include<stdio.h>

int main(void)
{
	char aa[100] = "abcde";
	ft_striteri(aa, ft_upper);
	printf("%s", aa);
	return (0);
}*/
