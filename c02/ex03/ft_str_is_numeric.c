/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:01:16 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/21 12:37:31 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_ok;

	is_ok = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	printf("%d", ft_str_is_numeric("123"));
	printf("%d", ft_str_is_numeric("000"));
	printf("%d", ft_str_is_numeric("987"));
	printf("%d", ft_str_is_numeric("/"));
	printf("%d", ft_str_is_numeric(":"));
	printf("%d", ft_str_is_numeric("}"));
	printf("%d", ft_str_is_numeric("@"));
	printf("%d", ft_str_is_numeric(" "));
	printf("%d", ft_str_is_numeric("\n"));
	printf("%d", ft_str_is_numeric("abc"));
	printf("%d", ft_str_is_numeric("CXZ"));
	printf("%d", ft_str_is_numeric(""));
}
*/
