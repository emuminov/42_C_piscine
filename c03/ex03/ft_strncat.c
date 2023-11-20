/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuminov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:38:00 by emuminov          #+#    #+#             */
/*   Updated: 2023/09/22 12:47:24 by emuminov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char src1[20] = "! Hehe.";
	char dest1[20] = "Hehehe. HEHEHEE!!!";
	char src2[20] = "! Hehe.";
	char dest2[20] = "Hehehe. HEHEHEE!!!";
	strncat(dest1, src1, 4);
	ft_strncat(dest2, src2, 4);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
}
*/
