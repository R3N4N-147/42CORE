#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    return s1[i] - s2[i];
}

int main(void)
{
    char arr1[] = "Brazil";
    char arr2[] = "Brazilia";
    printf("%d", ft_strcmp(arr1, arr2));
}