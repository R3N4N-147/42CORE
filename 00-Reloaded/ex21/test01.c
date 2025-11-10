#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int	i;
	int	min;
	int	max;
	int	*tab;
    const char *msg = "Usage: ./a.exe max min.\n";

	if (argc < 2)
	{
		write(1, msg, 31);
        return (1);
	}

	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		ft_putstr(tab[i]);
		i++;
	}
	free(tab);
	tab = 0;
	return (0);
}