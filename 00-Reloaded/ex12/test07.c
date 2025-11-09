#include <unistd.h>
#include <stdio.h> // printf()

int ft_iterative_factorial(int nb)
{
    int f;

    if (nb < 0)
    {
        // write(1, "Is negative.", 12); // OR fac = 0;
        return 0;
    }
    if(nb == 0 || nb == 1)
    {
        // fac = 1;
        // printf("%d\n", fac);
        return 1;
    }
    f = nb;
    if (nb > 1)
    {
        while (nb > 1)
        {
            f = f*(nb-1); // there are one more and maybe more efficient way to go
            nb--; // BUT this way works well :)
        }
        return f;
    }
    
    return 0;
}

int main()
{
    int nb; // lets test the following: 0, -10, 6, 99, 100.
    nb = ft_iterative_factorial(6); // nb = 6; REMEMBER to save the returning value in a variable
    printf("iterative factorial: %d", nb);
    return (0);
}

// ATENTION 
// CHECK TEST05
// ACTUALLY, check all the tests... 