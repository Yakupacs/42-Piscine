#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return(x);
}

int	*ft_range(int start, int end)
{
	int	size;
	int	i;
	int	*tab;

	size = ft_abs(end - start) + 1;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	i = 0;
	if (size == 1)
		tab[0] = start;
	if (start < end)
	{
		while (i < size)
		{
				tab[i] = start + i;
				i++;
		}
	}
	else if (start > end)
	{
		while (i < size)
		{
			tab[i] = start - i;
			i++;
		}
	}
	return (tab);
}

int	main(void)
{
	int	start;
	int	end;
	int	*tab;
	int	i;

	i = 0;
	start = 5;
	end = 7;
	tab = ft_range(start, end);
	while (i < 3)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
