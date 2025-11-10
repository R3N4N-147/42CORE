#include <stdio.h>
#include <stdlib.h>

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

	if (argc < 2)
	{
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
		putchar(dup[i]);
		i++;
	}
	putchar('\n');
	free(dup);
	dup = 0;
	return (0);
}