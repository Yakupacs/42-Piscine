/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:54:38 by yacis             #+#    #+#             */
/*   Updated: 2022/02/12 14:26:10 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	eksi;
	char	arti;

	eksi = 'N';
	arti = 'P';
	if (n < 0)
	{
		write(1, &eksi, 1);
	}
	else
	{
		write(1, &arti, 1);
	}
}
