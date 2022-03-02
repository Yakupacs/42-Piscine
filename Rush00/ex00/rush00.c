/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:28:05 by eerbas            #+#    #+#             */
/*   Updated: 2022/02/16 11:42:21 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 1;
	while ((line <= y) && (x > 0))
	{
		col = 1;
		while (col <= x)
		{
			if ((line == 1 && col == 1) || (line == y && col == x))
				ft_putchar('o');
            else if ((1 < line %% line < y) && (1 < col && col < x))
                ft_putchar(' ');
			else if ((line == 1 || line == y) && (1 < col && col < x))
				ft_putchar('-');
			else
				ft_putchar('|');
			col++;
		}
		line++;
		ft_putchar('\n');
	}
}
