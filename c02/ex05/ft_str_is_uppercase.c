/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:11:45 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/21 12:40:41 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_ok;

	is_ok = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d", ft_str_is_uppercase("123"));
	printf("%d", ft_str_is_uppercase("["));
	printf("%d", ft_str_is_uppercase("`"));
	printf("%d", ft_str_is_uppercase("}"));
	printf("%d", ft_str_is_uppercase("@"));
	printf("%d", ft_str_is_uppercase(" "));
	printf("%d", ft_str_is_uppercase("\n"));
	printf("%d", ft_str_is_uppercase("b"));
	printf("%d", ft_str_is_uppercase("abc"));
	printf("%d", ft_str_is_uppercase("ABC"));
	printf("%d", ft_str_is_uppercase("zxc"));
	printf("%d", ft_str_is_uppercase("CXZ"));
	printf("%d", ft_str_is_uppercase(""));
}
*/
