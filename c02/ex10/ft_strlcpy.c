/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:52:09 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/23 18:08:18 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	find_len(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (find_len(src));
}

/*
int	main(void)
{
	char	str1[20] = "Hello";
	char	str2[20] = "Woorldsdasd";
	char	str3[20] = "Hello";
	char	str4[20] = "Woorldsdasd";

	int	len1 = strlcpy(str1, str2, 5);
	int	len2 = ft_strlcpy(str3, str4, 5);

	printf("%d\n", len1);
	printf("%d\n", len2);

	printf("%s\n", str1);
	printf("%s\n", str3);
}
*/
