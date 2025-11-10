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
	if (dup == 0) // In case of an erro, malloc will return (0). That is the reason why we are checking again.
	{
		return (0);
	}

	i = 0;
	while (src[i]) // false when src[i] == '\0'
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0'; // reinforce that in the last position will be a null char
	return (dup);
}

int	main(int argc, char **argv)
{
	int i;
	if (argc < 2)
	{
		return (1);
	}

	char *dup = ft_strdup(argv[1]);
    if (dup == NULL)
	{
		return (1);
	}

	i = 0;
	while (dup[i]) // false when dup[i] == null ('\0') -> break the loop
	{
		putchar(dup[i]);
		i++;
	}
	putchar('\n');
	free(dup);
	dup = 0; // after free malloc, is a good practise to point something and dont leave your pointer hanging to nothing
	return (0);
}

// 1st: compile (gcc OR cc or other > check your terminal)

// 2nd: program_name type_your_word (for ex.: ./a.out Magic)