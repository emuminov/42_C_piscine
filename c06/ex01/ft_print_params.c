/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:06:44 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/28 09:34:25 by emuminov         ###   ########.fr       */
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

	i = 1;
	while (i < argc)
	{
		current_argument = argv[i];
		j = 0;
		while (current_argument[j] != '\0')
		{
			ft_putchar(current_argument[j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
