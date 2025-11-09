#include <unistd.h>

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

void ft_putchar(int nb)
{
    write(1, &nb, 1);
}

int main ()
{
    int i;
    int len;
    char c2[] = "Berlin"; // output: 6

    i = 0;
    len = 0;
    len = ft_strlen(&c2[i]);
    ft_putchar(len + 48);

    return (0);
}