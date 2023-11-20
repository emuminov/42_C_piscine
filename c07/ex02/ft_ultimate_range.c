/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:05:06 by emuminov          #+#    #+#             */
/*   Updated: 2023/10/04 06:54:31 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	difference;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	difference = max - min;
	arr = malloc(sizeof(int) * difference);
	if (range == 0)
		return (-1);
	i = 0;
	while (i < difference)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	l;
	int	*range;

	i = 0;
	min = 10;
	max = 20;
	l = ft_ultimate_range(&range, min, max);
	while(i < (max - min) && l > 0)
	{
		printf("%d\n", range[i]);
		i++;
	}
	printf("l is: %d\n", l);
	if (l != -1)
		free(range);
}
*/
