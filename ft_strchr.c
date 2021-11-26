/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:00:51 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/26 15:21:01 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char*str, int c)
{
	char	*temp;

	temp = (char *) str;
	while (*temp)
	{
		if (*temp == c)
			return (temp);
		temp++;
	}
	return (0);
}
/*
#include<stdio.h>
int main(void)
{
    char str[] = "BlockDMask \0Blog is good";    // "\0"을 넣어봤습니다.
    char* ptr = ft_strchr(str, 'o');
    
    while(ptr != NULL) 
    {
        printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *ptr, ptr);
        ptr = ft_strchr(ptr + 1, 'o');    //ptr + 1 이 중요합니다.
    }
    
    return 0;
}*/
