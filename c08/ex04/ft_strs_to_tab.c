/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:28:53 by emuminov          #+#    #+#             */
/*   Updated: 2023/10/04 15:43:09 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strsize(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
		s++;
	return (s + 1);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	size = ft_strsize(src);
	dest = malloc((sizeof(char) * size));
	if (dest == 0)
		return (src);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

t_stock_str	str_to_stock_str(char *str)
{
	t_stock_str	stock_str;

	stock_str.size = ft_strsize(str) - 1;
	stock_str.str = ft_strdup(str);
	stock_str.copy = ft_strdup(str);
	return (stock_str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		arr[i] = str_to_stock_str(av[i]);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	t_stock_str	*arr;

	if (argc < 2)
		return (0);
	arr = ft_strs_to_tab(argc - 1, &argv[1]);
	i = 0;
	while (i < argc - 1)
	{
		printf("%d\n", arr[i].size);
		printf("%s\n", arr[i].str);
		printf("%s\n", arr[i].copy);
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		free(arr[i].str);
		free(arr[i].copy);
		i++;
	}
	free(arr);
}
*/
