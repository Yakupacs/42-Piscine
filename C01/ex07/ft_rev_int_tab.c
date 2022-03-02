/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:00:16 by yacis             #+#    #+#             */
/*   Updated: 2022/02/15 10:05:22 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	havuz;

	i = 0;
	size--;
	while (i < size)
	{
		havuz = tab[i];
		tab[i] = tab[size];
		tab[size] = havuz;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	int tab[4] = {1,2,5,8};
	int size = 4;

	printf("%d\n", tab[1]);
	ft_rev_int_tab(tab, size);
	printf("%d\n", tab[1]);
	return (0);
}*/
