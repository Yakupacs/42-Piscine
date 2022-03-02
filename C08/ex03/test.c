/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:11:30 by yacis             #+#    #+#             */
/*   Updated: 2022/03/02 11:49:18 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *input)
{
	input->x = 42;
	input->y = 21;
}

int	main(void)
{
    t_point			point;
	struct s_point	point2;

	point.x = 0;
	point.y = 0;
	point2.x = 0;
	point2.y = 0;
	printf("%d\n", point.x);
	printf("%d\n", point.y);
	printf("%d\n", point2.x);
	printf("%d\n", point2.y);
	set_point(&point);
	set_point(&point2);
	printf("%d\n", point.x);
	printf("%d\n", point.y);
	printf("%d\n", point2.x);
	printf("%d\n", point2.y);
	return (0);
}
