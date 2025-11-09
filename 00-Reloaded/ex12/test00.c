#include <unistd.h>

void ft_iterative_factorial(int *nb)
{
    int f;
    f = *nb;
    if (f == 0)
    {
        *nb = 1;
    }
    else 
    {
        f = f-1;
        // *nb = (ft_iterative_factorial(&f))*(f-1); ???? fix it later
    }
}

int main()
{
    int nb; // factorial: n! = nb*(nb - 1)*(nb - 2)*...*3*2*1

    nb = 6;
    ft_iterative_factorial(&nb);

    return (0);
}