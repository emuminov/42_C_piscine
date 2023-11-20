/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:53:44 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/27 10:48:10 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| base[i] == '\n' || base[i] == '\v' || base[i] == '\r'
			|| base[i] == '\t' || base[i] == '\f')
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

int	base_to_dec(char digit, char *base)
{
	int	d;

	d = 0;
	while (base[d] != '\0')
	{
		if (base[d] == digit)
			return (d);
		d++;
	}
	return (d);
}

int	is_in_base(char d, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == d)
			return (1);
		i++;
	}
	return (0);
}

int	skip_spaces_and_signs(char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -(*sign);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	base_l;
	int	sign;

	base_l = check_base(base);
	if (!base_l)
		return (0);
	result = 0;
	sign = 1;
	i = skip_spaces_and_signs(str, &sign);
	while (is_in_base(str[i], base))
	{
		result *= base_l;
		result += base_to_dec(str[i], base);
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("f should be 15: %d\n", ft_atoi_base("f", "0123456789abcdef"));
	printf("1f should be 31: %d\n", ft_atoi_base("1f", "0123456789abcdef"));
	printf(" \\t\\n\\r\\v\\f64 should be 100: %d\n",
	ft_atoi_base(" \t\n\r\v\f64", "0123456789abcdef"));
	printf("--+-1100100 should be -100: %d\n",
	ft_atoi_base("--+-1100100", "01"));
	printf("-++-100 should be 100: %d\n",
	ft_atoi_base("-++-100", "0123456789"));
	printf("-+-+  1100100 should be 0: %d\n",
	ft_atoi_base("-+-+  1100100", "01"));
	printf("7fffffff should be 2147483647: %d\n",
	ft_atoi_base("7fffffff", "0123456789abcdef"));
	printf("-80000000 should be -2147483648: %d\n",
	ft_atoi_base("-80000000", "0123456789abcdef"));
	printf("abcd10 should be 0: %d\n", ft_atoi_base("abcd10", "0123456789"));
	printf("   ---fxcvb should be -15: %d\n",
	ft_atoi_base("   ---fxcvb", "0123456789abcdef"));
	printf("repeated base should be 0: %d\n",
	ft_atoi_base("10", "00123456789"));
	printf("base with minuses should be 0: %d\n",
	ft_atoi_base("10", "-0123456789"));
	printf("base with pluses should be 0: %d\n",
	ft_atoi_base("10", "0123456789+"));
	printf("base with whitespaces should be 0: %d\n",
	ft_atoi_base("10", " 0123456789"));
	printf("base with whitespaces should be 0: %d\n",
	ft_atoi_base("10", "0123456789\t"));
	printf("empty base should be 0: %d\n", ft_atoi_base("10", ""));
	printf("base with one digit should be 0: %d\n", ft_atoi_base("10", "1"));
}
*/
