/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:05:39 by emuminov          #+#    #+#             */
/*   Updated: 2023/10/04 15:03:38 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_base(char *base);

int	ft_atoi_base(char *str, char *base);

void	ft_rev_str(char *str, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int	count_digits(int nbr, int base_l)
{
	int	i;

	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr = -nbr;
	i = 0;
	while (nbr)
	{
		nbr = nbr / base_l;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc((sizeof(char) * len) + 1);
	if (dest == 0)
		return (dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*itoa_base(int nbr, int base_l, char *base)
{
	int		i;
	int		digits;
	int		sign;
	char	res[100];

	sign = 1;
	digits = count_digits(nbr, base_l);
	i = 0;
	if (nbr < 0)
		sign = -sign;
	while (digits--)
	{
		res[i] = ((base[(nbr % base_l) * sign]));
		nbr = nbr / base_l;
		i++;
	}
	if (sign == -1)
	{
		res[i] = '-';
		i++;
	}
	res[i] = '\0';
	ft_rev_str(res, i);
	return (ft_strdup(res));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_l1;
	int		base_l2;
	int		intermediate_int;
	char	*res;

	base_l1 = check_base(base_from);
	base_l2 = check_base(base_to);
	if (!base_l1 || !base_l2)
		return (0);
	intermediate_int = ft_atoi_base(nbr, base_from);
	res = itoa_base(intermediate_int, base_l2, base_to);
	return (res);
}
