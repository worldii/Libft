/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:28:21 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/17 06:20:51 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *source, unsigned int num)
{
	unsigned int	idx;

	idx = 0;
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

  ft_memcpy(str2, str1, strlen(str1) + 1);
  ft_memcpy(str3, "copy successful", 16);
  printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
  return 0;
}*/
