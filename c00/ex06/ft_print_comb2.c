/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:22:50 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/16 17:26:50 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void);

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int i)
{
	char	a;
	char	b;

	a = i / 10 + 48;
	b = i % 10 + 48;
	ft_put_char(a);
	ft_put_char(b);
}

void	ft_print_comb2(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 0;
	nbr2 = 1;
	while (nbr1 < 99)
	{
		while (nbr2 < 100)
		{
			print_numbers(nbr1);
			ft_put_char(' ');
			print_numbers(nbr2);
			if (nbr1 != 98)
			{
				ft_put_char(',');
				ft_put_char(' ');
			}
			nbr2++;
		}
		nbr1++;
		nbr2 = nbr1 + 1;
	}
}
