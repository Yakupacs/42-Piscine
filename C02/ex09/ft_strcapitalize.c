/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:24:47 by yacis             #+#    #+#             */
/*   Updated: 2022/02/15 16:54:07 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<stdio.h>
*/
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (x == 1 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else if (x == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (str[i] < 48 || (str[i] < 65 && str[i] > 57))
			x = 1;
		else if ((str[i] > 90 && str[i] < 97) || str[i] > 122)
			x = 1;
		else
			x = 0;
		i++;
	}
	return (str);
}
