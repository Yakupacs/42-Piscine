/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:58:37 by yacis             #+#    #+#             */
/*   Updated: 2022/02/22 17:11:19 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i)
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("%d ", ft_find_next_prime(100000));
	printf("%d ", ft_find_next_prime(10000000));
	printf("%d ", ft_find_next_prime(100));
	printf("%d ", ft_find_next_prime(1000));
	printf("%d ", ft_find_next_prime(10000));
	printf("%d ", ft_find_next_prime(2147483647));
}*/
