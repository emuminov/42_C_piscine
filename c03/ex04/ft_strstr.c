/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:04:40 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/23 18:03:29 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*found;

	found = 0;
	i = -1;
	if (to_find[0] == '\0')
		return (str);
	while (str[++i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			found = &str[i];
			while (str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (found);
				j++;
			}
			found = 0;
		}
	}
	return (found);
}

/*
int	main()
{
	char *a1 = strstr("", "am");
	char *a2 = strstr("I am here.", "I");
	char *a3 = strstr("Hello! I am here.", "lmao");
	char *a4 = strstr("Hello! I am here.", "Hello");
	char *a5 = strstr("Hello! I am here.", "Hello.");
	char *a6 = strstr("Hello! I am here.", "");

	char *b1 = ft_strstr("", "am");
	char *b2 = ft_strstr("I am here.", "I");
	char *b3 = ft_strstr("Hello! I am here.", "lmao");
	char *b4 = ft_strstr("Hello! I am here.", "Hello");
	char *b5 = ft_strstr("Hello! I am here.", "Hello.");
	char *b6 = ft_strstr("Hello! I am here.", "");

	printf("%s\n", a1);
	printf("%s\n", a2);
	printf("%s\n", a3);
	printf("%s\n", a4);
	printf("%s\n", a5);
	printf("%s\n", a6);

	printf("\n");

	printf("%s\n", b1);
	printf("%s\n", b2);
	printf("%s\n", b3);
	printf("%s\n", b4);
	printf("%s\n", b5);
	printf("%s\n", b6);
}
*/
