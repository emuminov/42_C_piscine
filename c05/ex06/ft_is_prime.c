/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 03:45:47 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/28 09:55:50 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 1;
	while (i <= (nb / i))
	{
		if (i != 1 && nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int     main()
{
        printf("-1: %d\n", ft_is_prime(-1));
        printf("0: %d\n", ft_is_prime(0));
        printf("1: %d\n", ft_is_prime(1));
        printf("2: %d\n", ft_is_prime(2));
        printf("3: %d\n", ft_is_prime(3));
        printf("4: %d\n", ft_is_prime(4));
        printf("5: %d\n", ft_is_prime(5));
        printf("6: %d\n", ft_is_prime(6));
        printf("7: %d\n", ft_is_prime(7));
        printf("8: %d\n", ft_is_prime(8));
        printf("9: %d\n", ft_is_prime(9));
        printf("10: %d\n", ft_is_prime(10));
        printf("13: %d\n", ft_is_prime(13));
        printf("17: %d\n", ft_is_prime(17));
        printf("19: %d\n", ft_is_prime(19));
        printf("23: %d\n", ft_is_prime(23));
        printf("29: %d\n", ft_is_prime(29));
        printf("78: %d\n", ft_is_prime(78));
        printf("79: %d\n", ft_is_prime(79));
        printf("80: %d\n", ft_is_prime(80));
}
*/
