/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:43:24 by jonghapa          #+#    #+#             */
/*   Updated: 2021/12/01 15:05:18 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(void	*ptr, int value, size_t num)
{
	unsigned char	*temp;
	size_t			idx;

	idx = 0;
	temp = (unsigned char *) ptr;
	while (idx < num)
	{
		if (*temp == (unsigned char) value)
			return (ptr);
		ptr++;
		temp++;
		idx++;
	}
	return (0);
}

/*
#include<stdio.h>
#include<string.h>
int main(void)
{

	char * pch;
	  char str[] = "Example string";

	  pch = (char*)ft_memchr(str, 'p', strlen(str));

  if (pch != NULL)
    printf("'p' found at position %d.\n", pch - str + 1);
  else
    printf("'p' not found.\n");
}*/
