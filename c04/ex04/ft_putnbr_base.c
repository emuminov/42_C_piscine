/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:28:14 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/27 11:18:05 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_l;
	int	a;

	base_l = check_base(base);
	if (!base_l)
		return ;
	if (nbr == -2147483648)
	{
		a = nbr % base_l;
		a = -a;
		ft_putnbr_base(nbr / base_l, base);
		nbr = a;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_l)
	{
		ft_putnbr_base(nbr / base_l, base);
		nbr = nbr % base_l;
	}
	if (nbr < base_l)
		ft_putchar(base[nbr]);
}

/*
#include <stdio.h>
int	main(void)
{
	int MAX_INT = 2147483647;
	int MIN_INT = -2147483648;
	printf("\n\n Should be 9");
	ft_putnbr_base(9, "0123456789");
	printf("\n\n Should be -9");
	ft_putnbr_base(-9, "0123456789");
	printf("\n\n Should be D");
	ft_putnbr_base(13, "0123456789ABCDEF");
	printf("\n\n Should be -K");
	ft_putnbr_base(-17, "0123456789ABCDEFGK");
	printf("\n\n Should be 3E7");
	ft_putnbr_base(999, "0123456789ABCDEF");
	printf("\n\n Should be 10000011011110");
	ft_putnbr_base(8414, "01");
	printf("\n\n Should be -80000000");
	ft_putnbr_base(MIN_INT, "0123456789ABCDEF");
	printf("\n\n Should be 7FFFFFFF");
	ft_putnbr_base(MAX_INT, "0123456789ABCDEF");
	printf("\n\n Should be nothing");
	ft_putnbr_base(MAX_INT, "00123456789ABCDEF");
	printf("\n\n Should be nothing");
	ft_putnbr_base(MAX_INT, "0123456789ABCDEFF");
	printf("\n\n Should be nothing");
	ft_putnbr_base(10, "0123456789ABCDEF-");
	printf("\n\n Should be nothing");
	ft_putnbr_base(10, "+0123456789ABCDEF");
}
*/
