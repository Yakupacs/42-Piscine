/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yacis <yacis@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 20:51:47 by yacis             #+#    #+#             */
/*   Updated: 2022/02/27 11:08:43 by yacis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		uzunluk;
	int		i;

	uzunluk = 0;
	i = 0;
	while (i < size)
	{
		uzunluk += ft_strlen(strs[i]);
		i++;
	}
	uzunluk += ft_strlen(sep) * size - 1;
	if (size <= 0)
		uzunluk = 1;
	str = (char *)malloc(sizeof(char) * uzunluk);
	if (!(str))
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ft_create_str(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}

int	main(void)
{
	char *text[10];

	text[0] = "Bu bir";
	text[1] = "test";
	text[2] = "fonksiyonu";
	text[3] = "ft_strjoin";
	text[4] = "ile";
	text[5] = "bir";
	text[6] = "separatör";
	text[7] = " , ";
	text[8] = "kullancaz";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, ","));
}
