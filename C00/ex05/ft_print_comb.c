/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:13:15 by yacis             #+#    #+#             */
/*   Updated: 2022/02/12 14:25:50 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char i0, char i1, char i2)
{
	char	a0;
	char	a1;
	char	a2;

	a0 = i0 + 48;
	a1 = i1 + 48;
	a2 = i2 + 48;
	write(1, &a0, 1);
	write(1, &a1, 1);
	write(1, &a2, 1);
	if(i0 != 8 && i1 != 9 && i2 != 10)
    {
        write(1, ", ", 2);
    }
}

void	ft_multinette(char i0, char i1, char i2)
{
	if (i0 != 8 || i1 != 9 || i2 != 10)
	{
		ft_putchar(i0, i1, i2);
	}
}

void	ft_print_comb(void)
{
	int	i0;
	int	i1;
	int	i2;

	i0 = 0;
	while (i0 != 8)
	{
		i1 = i0 + 1;
		while (i1 != 9)
		{
			i2 = i1 + 1;
			while (i2 != 10)
			{
				ft_multinette(i0, i1, i2);
				i2++;
			}
			i1++;
		}
		i0++;
	}	
}
