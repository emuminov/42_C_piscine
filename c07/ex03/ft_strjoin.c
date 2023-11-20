/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:15:44 by emuminov          #+#    #+#             */
/*   Updated: 2023/10/05 11:44:50 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int	ft_strslen(int size, char **strs)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	calc_size_of_res(int size, char **strs, char *sep)
{
	int	strs_s;
	int	sep_s;

	strs_s = (sizeof(char) * (ft_strslen(size, strs) + 1));
	sep_s = (sizeof(char) * (ft_strlen(sep) * (size - 1)));
	return (strs_s + sep_s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	if (size == 0)
	{
		res = malloc(sizeof(char *) * 1);
		res[0] = '\0';
		return (res);
	}
	res = malloc(calc_size_of_res(size, strs, sep));
	if (res == 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%d\n", ft_strslen(5, &argv[1]));
	char *test = ft_strjoin(5, &argv[1], ", ");
	printf("len of test: %d\n", ft_strlen(test));
	printf("%s\n", test);
	free(test);
}
*/
