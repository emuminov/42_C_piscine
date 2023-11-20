/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:16:36 by emuminov          #+#    #+#             */
/*   Updated: 2023/10/04 06:44:02 by emuminov         ###   ########.fr       */
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
