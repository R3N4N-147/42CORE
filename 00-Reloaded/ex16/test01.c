#include <unistd.h>

void ft_putchar(int nb)
{
    write(1, &nb, 1);
}

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

int main ()
{
    int i;
    int len;
    // char c1[] = "Renan"; // output: 5
    char c2[] = "Berlin"; // output: 6
    // char c3[] = "Abracadabra"; // 11 letters -> this program already needs to be improved 

    i = 0;
    len = 0;
    // len = ft_strlen(&c1[i]);
     len = ft_strlen(&c2[i]);
    // len = ft_strlen(&c3[i]);
    ft_putchar(len + 48); // AGAIN remember about ASCII and how to use write() together

    return (0);
}