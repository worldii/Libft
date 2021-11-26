/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 06:21:22 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/26 15:17:06 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	char	*pptr1;
	char	*pptr2;
	size_t	idx;

	idx = 0;
	pptr1 = (char *) ptr1 ;
	pptr2 = (char *) ptr2 ;
	while (idx < num)
	{
		if (*(pptr1 + idx) != *(pptr2 + idx))
			return (*(pptr1 + idx) - *(pptr2 + idx));
		idx++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
  char str1[256];
  char str2[256];
  int n;
  size_t len1, len2;

  printf("Enter a sentence: ");
  scanf("%s", str1);

  printf("Enter another sentence: ");
  scanf("%s", str2);

  len1 = strlen(str1);
  len2 = strlen(str2);

  n = ft_memcmp(str1, str2, len1 > len2 ? len1 : len2);

  if (n > 0) {
    printf("'%s' is greater than '%s'.\n", str1, str2);
  } else if (n < 0) {
    printf("'%s' is less than '%s'.\n", str1, str2);
  } else {
    printf("'%s' is the same as '%s'.\n", str1, str2);
  }
  return 0;
}*/
