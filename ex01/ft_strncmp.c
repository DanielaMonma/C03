/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:39:16 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/04 17:59:45 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
 	char	str1[] = "banana";
	char	str2[] = "bandana";
	
	int	result = ft_strncmp(str1, str2, 3);

	if (result == 0)
	{
		printf ("As palavras são iguais nas 3 primeiras letras");
	}
	else
	{
		printf ("As palavras são diferentes nas 3 primeiras letras");
	}
	return (0);
}*/
