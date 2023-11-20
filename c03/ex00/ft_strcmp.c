/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:53:51 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/22 09:38:24 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*
int	main()
{
	int r0 = strcmp("abc", "abc");
	int r1 = strcmp("abc", "ABC");
	int r2 = strcmp("", "");
	int r3 = strcmp("abc", "yxz");
	int r4 = strcmp("abc", "ab");
	int r5 = strcmp("ab", "abc");

	printf("%d\n", r0);
	printf("%d\n", r1);
	printf("%d\n", r2);
	printf("%d\n", r3);
	printf("%d\n", r4);
	printf("%d\n", r5);
	
	printf("\n");

	int e0 = ft_strcmp("abc", "abc");
	int e1 = ft_strcmp("abc", "ABC");
	int e2 = ft_strcmp("", "");
	int e3 = ft_strcmp("abc", "yxz");
	int e4 = ft_strcmp("abc", "ab");
	int e5 = ft_strcmp("ab", "abc");

	printf("%d\n", e0);
	printf("%d\n", e1);
	printf("%d\n", e2);
	printf("%d\n", e3);
	printf("%d\n", e4);
	printf("%d\n", e5);
}
*/
