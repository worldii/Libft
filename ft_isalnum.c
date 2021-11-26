/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:33:35 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/26 15:13:05 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0)
		return (1);
	else if (ft_isdigit(c) != 0)
		return (1);
	return (0);
}
/*
#include<stdio.h>
int main(void){
	printf("%d", ft_isalnum('1'));
}*/
