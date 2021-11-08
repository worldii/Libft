/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:38:30 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/08 19:50:14 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *ptr, unsigned int n)
{
	unsigned int	idx;
	char			*temp;

	idx = 0;
	temp = (char *) ptr;
	while (idx < n)
	{
		*(temp + idx) = 0;
		idx++;
	}	
}
