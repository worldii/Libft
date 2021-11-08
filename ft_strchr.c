/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:00:51 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/08 19:49:56 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
