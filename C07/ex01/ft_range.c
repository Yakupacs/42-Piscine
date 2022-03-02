/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:40:58 by yacis             #+#    #+#             */
/*   Updated: 2022/02/27 10:53:39 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*dizi;
	int	i;

	if (min >= max)
		return (0);
	dizi = ((int *)malloc(sizeof(int) * (max - min)));
	if (!dizi)
		return (0);
	i = 0;
	while (min < max)
	{
		dizi[i] = min;
		i++;
		min++;
	}
	return (dizi);
}

int	main(void)
{
	int *dizi;
	int	max;
	int	min;
	int	i;

	max = 9;
	min = 1;
	i = 0;
	dizi = ft_range(min, max);
	while (min < max)
	{
		printf("%d\n", dizi[i]);
		i++;
		min++;
	}
}
