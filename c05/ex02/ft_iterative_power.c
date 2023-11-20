/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:56:44 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/27 15:24:22 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power--)
	{
		result = result * nb;
	}
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(4, -1));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(2, 0));
	printf("%d\n", ft_iterative_power(2, 1));
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(2, 4));
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(2, 6));
	printf("%d\n", ft_iterative_power(2, 7));
}
*/
