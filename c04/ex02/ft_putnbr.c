/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:27:03 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/27 11:08:17 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digit(int nb)
{
	char	a;

	a = nb + '0';
	ft_putchar(a);
}

void	ft_putnbr(int nb)
{
	int	a;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			a = nb % 10;
			a = -a;
			ft_putnbr(nb / 10);
			nb = a;
		}
		else
		{
			ft_putchar('-');
			nb = -nb;
		}
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		print_digit(nb);
}

/*
int	main()
{
	char	a;

	a = '\n';

	ft_putnbr(5);
	ft_putchar('\n');
	ft_putnbr(52);
	ft_putchar('\n');
	ft_putnbr(100);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-0);
	ft_putchar('\n');
	ft_putnbr(-0);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
}
*/
