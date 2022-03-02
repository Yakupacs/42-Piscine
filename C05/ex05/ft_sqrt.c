/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:49:20 by yacis             #+#    #+#             */
/*   Updated: 2022/02/21 17:41:35 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	num = nb;
	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (num >= 2)
	{
		while (i * i <= num)
		{
			if (i * i == num)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(64));
	return (0);
}*/
