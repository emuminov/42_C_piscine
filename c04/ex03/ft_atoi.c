/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:20:07 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/27 11:09:39 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_atoi("50"));
	printf("%d\n", ft_atoi("---123"));
	printf("%d\n", ft_atoi("--90"));
	printf("%d\n", ft_atoi("---++++-9999"));
	printf("%d\n", ft_atoi(" 50"));
	printf("%d\n", ft_atoi(" \t\r\n\v\f50"));
	printf("%d\n", ft_atoi(" -+-+- 50"));
	printf("%d\n", ft_atoi("absd10"));
}
*/
