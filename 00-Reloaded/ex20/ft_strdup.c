#include <stdlib.h>
#include <unistd.h> // write()

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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	dup = 0;
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == 0)
	{
		return (0);
	}

	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(int argc, char **argv) // ./a.exe word_to_be_copy
{
	int i;
    char *dup;
    const char *msg = "Usage: ./a.out word_to_be_copy\n";

	if (argc < 2)
	{
		write(1, msg, 31);
        return (1);
	}

	dup = ft_strdup(argv[1]);
    if (dup == NULL)
	{
		return (1);
	}

	i = 0;
	while (dup[i])
	{
		ft_putchar(dup[i]);
		i++;
	}
	ft_putchar('\n');
	free(dup);
	dup = 0;
	return (0);
}