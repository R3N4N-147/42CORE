#include <unistd.h>
#include <stdio.h>

void ft_putchar(int nb)
{
    write(1, &nb, 1);
    // printf("len is %d", nb);
}

int main ()
{
    int i;
    int len;
    char c1[] = "Renan";
    // char c2[] = "Berlin";
    // char c3[] = "Abracadabra";

    i = 0;
    len = 0;
    while(c1[len] != '\0')
    {
        len++;
    }
    // printf("len is %d", len);
    ft_putchar(len+48);  // AGAIN remember about ASCII and how to use write() together

    return (0);
}