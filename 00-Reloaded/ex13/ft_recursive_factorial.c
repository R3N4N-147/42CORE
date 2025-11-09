#include <unistd.h>

int ft_recursive_factorial(int nb)
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
        f = f*ft_recursive_factorial(nb-1);
        return f;
    }

    return 0;
}

// int main()
// {
//     int nb; // lets test the following: 0, -10, 6, 99, 100.
//     nb = ft_recursive_factorial(3); // nb = 3; 
//     printf("%d\n", nb); // to use this add the library -> #include <stdio.h>
//     return (0);
// }