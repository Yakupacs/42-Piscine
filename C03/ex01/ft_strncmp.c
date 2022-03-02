/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:23:56 by yacis             #+#    #+#             */
/*   Updated: 2022/02/21 11:31:38 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_strncmp("HelloWorld", "Hello", 5));
	printf("\n");
	printf("%d", ft_strncmp("Hello", "HelloWorld", 6));
	printf("\n");
	printf("%d", ft_strncmp("Yakupp", "Yakup", 6));
}
