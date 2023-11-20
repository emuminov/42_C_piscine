/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:53:32 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/22 10:23:11 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(char c, char *dex_chars)
{
	int	a;

	a = (int) c;
	ft_putchar(dex_chars[a / 16]);
	ft_putchar(dex_chars[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			ft_putchar('\\');
			print_hex(str[i], "0123456789abcdef");
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
/*
int main()
{
	ft_putstr_non_printable("Abcd\n \b \t \v \f \r \\o vcxZ");
}
*/
