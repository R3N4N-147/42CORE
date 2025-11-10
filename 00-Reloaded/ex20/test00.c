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
	i = 0;
	if (src == 0) // Cheking if the string is empty.
		return (0);
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == 0) // In case of an erro, malloc will return (0). That is the reason why we are checking again.
		return (0);
	while (src[i]) // false when src[i] == '\0'
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0'; // reinforce that in the last position will be a null char
	return (dup);
}

int	main(void)
{
	int		i;
	char	*src;
	char	*dup;

	i = 0;
	src = "Hello";
	dup = ft_strdup(src);
	while (dup[i]) // false when dup[i] == null ('\0') -> break the loop
	{
		printf("%c", dup[i]);
		i++;
	}
	free(dup);
	dup = 0; // after free malloc, is a good practise to point something and dont leave your pointer hanging to nothing
	return (0);
}