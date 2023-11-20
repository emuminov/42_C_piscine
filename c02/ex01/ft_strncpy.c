/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:12:32 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/21 16:56:27 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	str1[20] = "Hello";
	char	str2[] = "Woorld";

	char	str3[20] = "Hello";
	char	str4[] = "Woorld";

	char	*new_str1 = strncpy(str1, str2, 6);
	char	*new_str2 = ft_strncpy(str3, str4, 6);

	printf("%s\n", new_str1);
	printf("%s\n", new_str2);
}
*/
