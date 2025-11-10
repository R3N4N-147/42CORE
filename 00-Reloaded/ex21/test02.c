#include <stdlib.h> // malloc
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(int n)
{
    if (n >= 10)
	{
		ft_print_numbers(n / 10);
    	ft_putchar((n % 10) + 48);
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

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	tab = 0;
	min = 4;
	max = 9;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		ft_print_numbers(tab[i]);
		i++;
	}
	free(tab);
	tab = 0;
	return (0);
}