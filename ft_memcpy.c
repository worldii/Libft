/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:28:21 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/09 00:51:52 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *source, unsigned int num)
{
	unsigned int	idx;

	idx = 0;
	if (dest == 0 || source == 0)
		return (0);
	while (idx < num)
	{
		((unsigned char *) dest)[idx] = ((unsigned char *) source)[idx];
		idx++;
	}
	return (dest);
}
