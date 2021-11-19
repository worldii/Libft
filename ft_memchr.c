/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:43:24 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/17 03:55:44 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void	*ptr, int value, unsigned int num)
{
	char			*temp;
	unsigned int	idx;

	idx = 0;
	temp = (char *) ptr;
	while (idx < num && *temp)
	{
		if (*temp == value)
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
