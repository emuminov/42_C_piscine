/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:26:10 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/21 12:36:21 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_ok;

	i = 0;
	is_ok = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("%d", ft_str_is_alpha("123"));
	printf("%d", ft_str_is_alpha("["));
	printf("%d", ft_str_is_alpha("`"));
	printf("%d", ft_str_is_alpha("}"));
	printf("%d", ft_str_is_alpha("@"));
	printf("%d", ft_str_is_alpha(" "));
	printf("%d", ft_str_is_alpha("\n"));
	printf("%d", ft_str_is_alpha("b"));
	printf("%d", ft_str_is_alpha("abc"));
	printf("%d", ft_str_is_alpha("ABC"));
	printf("%d", ft_str_is_alpha("zxc"));
	printf("%d", ft_str_is_alpha("CXZ"));
	printf("%d", ft_str_is_alpha("C1Z"));
	printf("%d", ft_str_is_alpha("1CZ"));
	printf("%d", ft_str_is_alpha("CZ1"));
	printf("%d", ft_str_is_alpha(""));
}
*/
