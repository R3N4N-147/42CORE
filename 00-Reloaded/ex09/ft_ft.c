#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

void ft_putchar(int x)
{
    write(1, &x, 1);
}

int main()
{
    int nbr;
    nbr = 36;
    ft_putchar(nbr);
    ft_ft(&nbr);
    ft_putchar(10);
    ft_putchar(nbr);
    return (0);
}