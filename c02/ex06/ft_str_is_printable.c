/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:15:06 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/20 15:20:25 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_ok;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			is_ok = 0;
			return (is_ok);
		}
		i++;
	}
	is_ok = 1;
	return (is_ok);
}

/*
int main()
{
	printf("%d", ft_str_is_printable("123"));
	printf("%d", ft_str_is_printable("[@}`"));
	printf("%d", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable(" "));
	printf("%d", ft_str_is_printable("abc"));
	printf("%d", ft_str_is_printable("CXZ"));
	printf("%d", ft_str_is_printable("a\nb"));
	printf("%d", ft_str_is_printable("\t1"));
	printf("%d", ft_str_is_printable("3a\v"));
}
*/
