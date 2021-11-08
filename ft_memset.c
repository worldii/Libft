/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:30:58 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/08 19:51:55 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void	*ptr, int value, unsigned int n)
{
	unsigned int	idx;
	char			*temp;

	temp = (char *) ptr;
	idx = 0;
	while (idx < n)
	{
		*(temp + idx) = value;
		idx++;
	}
	return (ptr);
}
