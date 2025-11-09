#include <unistd.h>
#include <stdio.h> // printf()

int ft_iterative_factorial(int nb)
{
    int f;

    if (nb < 0)
    {
        return 0;
    }
    if(nb == 0 || nb == 1)
    {
        return 1;
    }

    f = nb;
    if (nb > 1)
    {
        while (nb > 1)
        {
            f = f*(nb-1);
            nb--;
        }
        return f;
    }

    return 0;
}

int main()
{
    int nb; // lets test the following: 0, -10, 6, 99, 100.
    nb =ft_iterative_factorial(6); // nb = 6; 
    printf("%d\n", nb);
    return (0);
}