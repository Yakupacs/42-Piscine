/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:33:30 by yacis             #+#    #+#             */
/*   Updated: 2022/02/12 14:25:30 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char slm)
{	
	write(1, &slm, 1);
}

void	ft_putput(char i0, char i1)
{
	ft_putchar(i0 / 10 + 48);
	ft_putchar(i0 % 10 + 48);
	ft_putchar(' ');
	ft_putchar(i1 / 10 + 48);
	ft_putchar(i1 % 10 + 48);
	if (i0 != 98 || i1 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_comb2(void)
{
	int	i0;
	int	i1;

	i0 = 0;
	while (i0 <= 98)
	{
		i1 = i0 + 1;
		while (i1 <= 99)
		{
			ft_putput(i0, i1);
			i1++;
		}
	i0++;
	}
}
