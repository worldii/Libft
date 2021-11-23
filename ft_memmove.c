/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:51:17 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/20 01:08:09 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memcpy 와 거의 비슷 단, memmove 는 버퍼에 옮긴다는 차이가 있다. 
void	*ft_memmove(void *dest, const void *source, unsigned int num)
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
#include<string.h>
#include<stdio.h>
 
int main(void)
{
    int src[] = { 7, 6, 5, 4, 3, 2, 1};
    int dest[7];
 
    // 메모리 복사 (전체)
    ft_memmove(dest, src, sizeof(src));
    //memmove(dest, src, sizeof(int) * 7); // 이것도 가능
    
    // 복사한 배열
    for (int i = 0; i < 7; ++i)
    {
        printf("%d ", src[i]);
    }
 
    printf("\n");
 
    // 복사된 배열
    for (int i = 0; i < 7; ++i)
    {
        printf("%d ", dest[i]);
    }
 
    return 0;
}*/
