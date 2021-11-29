/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:28:21 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/29 18:18:46 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	size_t	idx;

	idx = 0;
	if (dest == 0 && source == 0 && num > 0)
		return (dest);
	while (idx < num)
	{
		((unsigned char *) dest)[idx] = ((unsigned char *) source)[idx];
		idx++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
  char str1[] = "Sample string";
  char str2[40];
  char str3[40];

  printf("%s %s", ft_memcpy(NULL , NULL, 1), memcpy(NULL, NULL, 1));
 
  ft_memcpy(str2, str1, strlen(str1) + 1);
  ft_memcpy(str3, "copy successful", 16);
  printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
  return 0;
}*/
