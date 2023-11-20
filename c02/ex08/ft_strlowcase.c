/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:23:17 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/20 15:37:07 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char a[] = "aBcdFga";
	char b[] = "zafcxyz";
	char c[] = "1sfdsza";
	char f[] = "zdFjHz2";
	char g[] = "ASDFGHZ";
	char h[] = "`[]{}-=";

	printf("%s\n", ft_strlowcase(a));
	printf("%s\n", ft_strlowcase(b));
	printf("%s\n", ft_strlowcase(c));
	printf("%s\n", ft_strlowcase(f));
	printf("%s\n", ft_strlowcase(f));
	printf("%s\n", ft_strlowcase(g));
	printf("%s\n", ft_strlowcase(h));
}
*/
