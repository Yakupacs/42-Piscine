#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	wdmatch(char *str, char *str1)
{
	int	i;
	int	j;
	int	wdlen;

	i = 0;
	j = 0;
	wdlen = 0;
	while (str[i])
	{
		while (str1[j])
		{
			if (str[i] == str1[j])
			{
				wdlen++;
				break;
			}
			j++;
		}
		i++;
		if (wdlen == ft_strlen(str))
			ft_putstr(str);
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
