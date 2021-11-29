/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 05:22:50 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/29 18:28:12 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || \
			c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	unsigned long long sum;
	int temp;
	sign = 1;
	sum = 0;
	while (ft_isspace(*str))
		str++;
	if (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		sum = sum * 10 + (*str - '0') ;
		str++;
	}
	if (sum > 9223372036854775807)
	{
		if (sign == 1)
			return (0);
		else
			return (-1);
	}
	temp = sum;
	if (sign == -1)
		temp = -temp;
	return (temp);
}
/*
#include<stdio.h>
int main(void)
{
printf("%d %d %d %d ", ft_atoi("2147483648"), atoi("2147483648"), ft_atoi("-131231231321212"), atoi("-131231231221"));
}*/
