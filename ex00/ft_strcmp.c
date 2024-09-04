/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 10:33:46 by danielpe          #+#    #+#             */
/*   Updated: 2024/09/04 17:42:17 by danielpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1 [i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "Daniela";
	char	str2[] = "Daniela";
	char	str3[] = "Danila";

	printf ("A comparação entre 1 e 2 é %d\n", ft_strcmp(str1, str2));
	printf ("A comparação entre 2 e 3 é %d\n", ft_strcmp(str2, str3));
	printf ("A comparação entre 3 e 1 é %d\n", ft_strcmp(str3, str1));

	return (0);
}*/
