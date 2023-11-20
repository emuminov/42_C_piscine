/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:00:14 by emuminov          #+#    #+#             */
/*   Updated: 2023/10/04 06:58:35 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in_str(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	find_words_len(char *str, char *charset)
{
	int	i;
	int	is_new_word;
	int	count;

	is_new_word = 1;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_in_str(str[i], charset))
			is_new_word = 1;
		if (is_new_word == 1 && !is_in_str(str[i], charset))
		{
			is_new_word = 0;
			count++;
		}
		i++;
	}
	return (count);
}

char	*selective_dup(int start, int end, char *str)
{
	int		i;
	int		diff;
	char	*res;

	i = 0;
	diff = end - start;
	res = malloc(sizeof(char) * (diff + 1));
	while (start < end)
	{
		res[i] = str[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	arr = malloc(sizeof(char *) * (find_words_len(str, charset) + 1));
	if (arr == 0)
		return (arr);
	arr[find_words_len(str, charset)] = 0;
	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] && !is_in_str(str[i], charset))
		{
			j = 0;
			while (str[i + j] && !is_in_str(str[i + j], charset))
				j++;
			arr[k++] = selective_dup(i, i + j, str);
			i += j - 1;
		}
		i++;
	}
	arr[k] = 0;
	return (arr);
}
/*
#include <stdio.h>

int	main()
{
	char	**test;
	int	i;

	test = ft_split("Hello there everybody!", " ");
	i = 0;
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	if (test)
	{
		i = 0;
		while (test[i])
		{
			free(test[i]);
			i++;
		}
	}
	if (test)
		free(test);
}
*/
