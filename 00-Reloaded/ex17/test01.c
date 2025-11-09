#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len;
    len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}

int ft_strcmp(char *s1, char *s2)
{
    int word1 = 0;
    int word2 = 0;
    int i = 0;
    word1 = ft_strlen(&s1[i]);
    word2 = ft_strlen(&s2[i]);

    if (word1 == word2) // 0, if the s1 and s2 are equal;
    {
        return (0);
    }
    if (word1 < word2) // a negative value if s1 is less than s2;
    {
        return (-1);
    }
    if (word1 > word2) // a positive value if s1 is greater than s2.
    {
        return (1);
    }
}

int main()
{
    int c;
    char arr1[] = "Brazil";
    char arr2[] = "Brazilia";
    // printf("%d", ft_strcmp(arr1, arr2));

    c = ft_strcmp(arr1, arr2);

    write(1, &c, 1);
}


// Wrong way ...