/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:17:57 by yacis             #+#    #+#             */
/*   Updated: 2022/02/12 18:45:07 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char k)
{
	write(1, &k, 1);
}	

void	ft_putnbr(int gelenSayi)
{
	if (gelenSayi == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		gelenSayi = 147483648;
	}
	if (gelenSayi < 0)
	{
		ft_putchar('-');
		gelenSayi *= -1;
	}
	if (gelenSayi < 10)
	{
		ft_putchar(gelenSayi + 48);
	}
	else
	{
		ft_putnbr(gelenSayi / 10);
		ft_putnbr(gelenSayi % 10);
	}	
}

int	main(void)
{
	ft_putnbr(-2323);
}
