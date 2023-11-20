/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:12:13 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/22 09:40:05 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
	int r0 = strncmp("abc", "a", 1);
	int r1 = strncmp("abc", "ABC", 3);
	int r2 = strncmp("abc", "123", 3);
	int r3 = strncmp("abc", "yxz", 3);
	int r4 = strncmp("abc", "ab", 2);
	int r5 = strncmp("ab", "abc", 2);
	int r6 = strncmp("ab", "abc", 2);

	printf("%d\n", r0);
	printf("%d\n", r1);
	printf("%d\n", r2);
	printf("%d\n", r3);
	printf("%d\n", r4);
	printf("%d\n", r5);
	printf("%d\n", r6);
	
	printf("\n");

	int e0 = ft_strncmp("abc", "a", 1);
	int e1 = ft_strncmp("abc", "ABC", 3);
	int e2 = ft_strncmp("abc", "123", 3);
	int e3 = ft_strncmp("abc", "yxz", 3);
	int e4 = ft_strncmp("abc", "ab", 2);
	int e5 = ft_strncmp("ab", "abc", 2);
	int e6 = ft_strncmp("ab", "abc", 2);

	printf("%d\n", e0);
	printf("%d\n", e1);
	printf("%d\n", e2);
	printf("%d\n", e3);
	printf("%d\n", e4);
	printf("%d\n", e5);
	printf("%d\n", e6);
}
*/
