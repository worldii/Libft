/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:10:20 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/16 23:15:32 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*temp;

	len = ft_strlen(str);
	temp = (char *) str + len;
	while (temp >= str)
	{
		if (*temp == c)
			return (temp);
		temp--;
	}
	return (0);
}
/*8#include<stdio.h>
int main (void)
{
    char str[100] = "12345abcde54321";
    const char *cp;

    //strrchr 함수 이용
    printf("%s 뒤에서부터 %c을(를) 처음 발견한 위치\n",str,'5');
    cp = ft_strrchr(str,'5');

    if(cp)
    {
        printf("%d번째 %s\n", cp - str + 1, cp);
    }
    else
    {
        printf("없음\n");
    }
    return 0;
}*/
