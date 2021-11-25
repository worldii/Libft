/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonghapa <bbc2788@naver.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:43:22 by jonghapa          #+#    #+#             */
/*   Updated: 2021/11/25 14:13:23 by jonghapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
			while (*s && *s == c)
				s++;
		}
	}
	return (count);
}

void	ass_word(char const *s, char c, char **word, int *widx)
{
	int	tempcount;

	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tempcount = 0;
			while (*s && *s != c)
			{
				tempcount++;
				s++;
			}
			s -= tempcount;
			tempcount = 0;
			word[*widx] = (char *) malloc(sizeof(char) * (tempcount + 1));
			if (word[*widx] == NULL)
				return ;
			while (*s && *s != c)
				word[*widx][tempcount++] = *s++;
			word[(*widx)++][tempcount] = '\0';
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	int		count;
	int		widx;

	widx = 0;
	count = count_word(s, c);
	word = (char **) malloc (sizeof (char *) * (count + 1));
	if (word == NULL)
		return (NULL);
	ass_word(s, c, word, &widx);
	word[count] = NULL;
	return (word);
}
/*
#include<stdio.h>

int main(void)
{
	char const str[100] = "hello everybody";
	char ** word = ft_split(str,' ');
	for (int i = 0 ; i< 2; i++)
	{
		printf("%s\n", word[i]);
	}
	return (0);
}*/
