/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:19:48 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/21 09:22:51 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	printf("%d\n", ft_strlen("Hehe"));
	printf("%d\n", ft_strlen("Hoho!"));
	printf("%d\n", ft_strlen(""));
	printf("%d\n", ft_strlen(" "));
}
*/
