/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:05:36 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/21 12:39:19 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_ok;

	is_ok = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			is_ok = 1;
		}
		else
		{
			is_ok = 0;
			return (is_ok);
		}
		i++;
	}
	return (is_ok);
}
/*
int main()
{
	printf("%d", ft_str_is_lowercase("123"));
	printf("%d", ft_str_is_lowercase("["));
	printf("%d", ft_str_is_lowercase("`"));
	printf("%d", ft_str_is_lowercase("}"));
	printf("%d", ft_str_is_lowercase("@"));
	printf("%d", ft_str_is_lowercase(" "));
	printf("%d", ft_str_is_lowercase("\n"));
	printf("%d", ft_str_is_lowercase("b"));
	printf("%d", ft_str_is_lowercase("abc"));
	printf("%d", ft_str_is_lowercase("ABC"));
	printf("%d", ft_str_is_lowercase("zxc"));
	printf("%d", ft_str_is_lowercase("CXZ"));
	printf("%d", ft_str_is_lowercase(""));
}
*/
