/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:50:19 by emuminov          #+#    #+#             */
/*   Updated: 2023/10/04 06:50:05 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	difference;
	int	*range;

	if (min >= max)
		return (0);
	difference = max - min;
	range = malloc(sizeof(int) * difference);
	if (range == 0)
		return (range);
	i = 0;
	while (i < difference)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*range;

	i = 0;
	min = 10;
	max = 20;
	range = ft_range(min, max);
	while(i < (max - min))
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}
*/
