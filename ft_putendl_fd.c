/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:07:56 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/26 15:19:21 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, fd);
	write(fd, "\n", 1);
}
/*
int main(void)
{
	int fd = open ("b.txt", O_RDWR);
	ft_putendl_fd("123", fd);
	close(fd);
}*/
