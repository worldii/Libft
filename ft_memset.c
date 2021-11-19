/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:30:58 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/17 03:44:02 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void	*ptr, int value, unsigned int n)
{
	unsigned int	idx;
	unsigned char	*temp;

	temp = (unsigned char *) ptr;
	idx = 0;
	while (idx < n && *(temp + idx) != 0)
	{
		*(temp + idx) = value;
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
