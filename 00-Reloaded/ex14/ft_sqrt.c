#include <unistd.h>
#include <stdio.h>

int ft_sqrt(nb)
{
    int counter;
    int result;

    if (nb < 0)
    {
        return (0);
    }

    counter = 0;
    result = 0;
    while(result < nb && counter <= 46340)
    {
        result = counter * counter;
        if(result == nb)
        {
            return counter;
        }
        counter++;
    }

    return (0);
}

int main()
{
    int nb;
    nb = ft_sqrt(100);   
    printf("Square root: %d", nb);
    return (0);
}