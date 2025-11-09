#include <unistd.h>

void ft_ft(int *nbr)
{
    *nbr = 42; // * (ASCII table)
}

int main()
{
    int nbr;
    nbr = 36; // $ (ASCII table)
    write(1, &nbr, 1);

    write(1, "\n", 1);
    // ft_ft(nbr); not cool
    ft_ft(&nbr);

    write(1, &nbr, 1);
    return (0);
}