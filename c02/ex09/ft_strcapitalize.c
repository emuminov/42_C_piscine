/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:32:33 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/22 10:01:25 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_alpha(char c)
{
	if (is_lower(c) || is_upper(c))
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;

	is_new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_alpha(str[i]))
			is_new_word = 1;
		if (is_new_word && is_lower(str[i]))
		{
			str[i] = str[i] - 32;
			is_new_word = 0;
		}
		else if (is_new_word
			&& ((is_upper(str[i]) || is_numeric(str[i]))))
		{
			is_new_word = 0;
		}
		else if (!is_new_word && is_upper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char str1[] =
	"sALUT, COmment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str2[] = 
	"sALUT,   commen t tu v as ? 42mo ts  123   quarante-deux; cinquante+et+un";
	ft_strcapitalize(str1);
	ft_strcapitalize(str2);

	printf("%s\n\n", str1);
	printf("%s\n\n", str2);
}
*/
