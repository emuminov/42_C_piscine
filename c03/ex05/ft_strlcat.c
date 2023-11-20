/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:56:26 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/22 09:29:06 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	find_len(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = find_len(src);
	dest_len = find_len(dest);
	if (size == 0)
		return (src_len);
	i = find_len(dest);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_len)
		return (src_len + size);
	return (src_len + dest_len);
}
/*
int	main()
{
	char str1[] = "Hoho!";
	char str2[] = " Ohoho.";
	int l1 = strlcat(str1, str2, 20);
	int l2 = strlcat(str2, "", 20);
	printf("%d\n", l1);
	printf("%d\n", l2);

	char ft_str1[] = "Hoho!";
	char ft_str2[] = " Ohoho.";
	int ft_l1 = ft_strlcat(ft_str1, ft_str2, 20);
	int ft_l2 = ft_strlcat(ft_str2, "", 20);
	printf("%d\n", ft_l1);
	printf("%d\n", ft_l2);
}
*/
