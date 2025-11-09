#include <unistd.h>
#include <stdio.h> // printf()

int main()
{
    //ft_iterative_factorial(int nb);

    int nb;
    int fac;

    // lets test the following: 0, -10, 6, 99, 100.
    nb = 6;

    if (nb < 0)
    {
        write(1, "Is negative.", 12);
    }
    if(nb == 0 || nb == 1)
    {
        fac = 1;
        printf("%d\n", fac);
    }
    fac = nb;
    if (nb > 1)
    {
        while (nb > 1)
        {
            fac = fac*(nb-1);
            nb--;
        }
        printf("%d\n", fac);
    }
    return (0);
}

// ATENTION 
// CHECK TEST05
// ACTUALLY, check all the tests... 