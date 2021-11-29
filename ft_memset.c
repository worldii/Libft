/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:30:58 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/29 18:18:52 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void	*ptr, int value, size_t n)
{
	size_t			idx;
	unsigned char	*temp;

	temp = (unsigned char *) ptr;
	idx = 0;
	while (idx < n)
	{
		*(temp + idx) = (unsigned char) value;
		idx++;
	}
	return (ptr);
}
/*
#include<stdio.h>
int main(void)
{
    int arr1 [10] = {2,4,6,8,10,12,14,16,18,20};
    ft_memset(arr1, 1, 10 * sizeof(int));
    for (int i = 0 ; i< 10 ; i++)
	{
		printf("%d ", arr1[i]);
	}

    return 0;
}
*/
