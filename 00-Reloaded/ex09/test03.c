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
    
    // ft_putchar("\n");
    // write(1, "\n", 1);
    ft_putchar(10); // the integer 10 is the equivalent to "\n" (new line) for ASCII

    ft_putchar(nbr);
    return (0);
}