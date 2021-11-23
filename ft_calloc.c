/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 05:53:55 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/24 06:06:20 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	char			*temp;
	unsigned int	idx;

	idx = 0;
	if (size == 0 || count == 0)
		return (0);
	temp = malloc (count * size);
	while (idx < count * size)
		*(temp + idx++) = 0;
	return (temp);
}
/*
#include<stdio.h>
int main() { 
	int arr_1[5]; // 배열 선언 
	int *arr_2; // 포인터 변수 선언 
	int i; for(i = 0; i < 5; i++) { arr_1[i] = i+1; // 배열에 값 대입 
	} 
	//arr_2 = (int*) malloc(sizeof(int)*5); // 메모리 할당, 배열의 크기만큼 할당하기 위해 5를 곱함 
	arr_2 = (int*) ft_calloc(5, sizeof(int)); // sizoe(int)크기의 변수를 5개 저장할 수 있는 공간할
	for(i = 0; i < 5; i++)
	{ arr_2[i] = arr_1[i]; printf("%d ", arr_2[i]); }
	free(arr_2); // free함수를 이용하여 메모리 해제 return 0; 
}*/
