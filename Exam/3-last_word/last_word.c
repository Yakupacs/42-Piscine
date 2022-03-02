#include <unistd.h>

void	last_word(char *str)
{
	int	i;

	i =  0;
	while (str[i])
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while (str[i] != 32 && str[i] != '\t' && str[i])
	{
		i--;
	}
	i++;
	while(str[i] != 32 && str[i] != '\t' && str[i] )
	{
		write(1, &str[i], 1);
		i++;
	}	
			
}

int	main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}
