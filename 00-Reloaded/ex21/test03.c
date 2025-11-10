#include <stdlib.h> // malloc()
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_print_numbers(n / 10);
	ft_putchar((n % 10) + '0');
}

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == 0) // if malloc for any reason fail it will return 0 (null), I'm just checking in case that happen
	{
		return (0);
	}
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}


int	main(void) // instructions: min included max excluded
{
	int	min = 4;
	int	max = 9;
	int	*tab = ft_range(min, max);

	if (!tab)
		return (1);
	for (int i = 0; i < max - min; i++)
	{
		ft_print_numbers(tab[i]);
		ft_putchar('\n');
	}
	ft_putchar('\n');
	free(tab);
	return (0);
}

// review, and take notes later
// there are a lot goiong under the hood