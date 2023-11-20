/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:54:47 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/20 15:21:16 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char a[] = "abcdfga";
	char b[] = "zafcxyz";
	char c[] = "1sfdsza";
	char f[] = "zdfjhz2";
	char g[] = "ASDFGHZ";
	char h[] = "`[]{}-=";

	printf("%s\n", ft_strupcase(a));
	printf("%s\n", ft_strupcase(b));
	printf("%s\n", ft_strupcase(c));
	printf("%s\n", ft_strupcase(f));
	printf("%s\n", ft_strupcase(f));
	printf("%s\n", ft_strupcase(g));
	printf("%s\n", ft_strupcase(h));
}
*/
