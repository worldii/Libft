/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:20:06 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/26 15:32:42 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int	s1idx;
	int	s2idx;

	s1idx = 0;
	s2idx = 0;
	while (s1[s1idx] != '\0' && s2[s2idx] != '\0' && n != 0)
	{	
		if (s1[s1idx] != s2[s2idx])
		{
			return (s1[s1idx] - s2[s2idx]);
		}
		n--;
		s1idx++;
		s2idx++;
	}
	if (n == 0)
		return (0);
	else
		return (s1[s1idx] - s2[s2idx]);
}
