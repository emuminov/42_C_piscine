/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:06:46 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/28 09:36:47 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*current_argument;

	i = argc;
	while (i > 1)
	{
		current_argument = argv[i - 1];
		j = 0;
		while (current_argument[j] != '\0')
		{
			ft_putchar(current_argument[j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
}
