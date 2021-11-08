/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:10:20 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/08 19:19:28 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
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

char	*strrchr(const char *str, int c)
{
	int		len;
	char	*temp;

	len = ft_strlen(str);
	temp = str + len;
	while (temp >= str)
	{
		if (*temp == c)
			return (temp);
		temp--;
	}
	return (0);
}
