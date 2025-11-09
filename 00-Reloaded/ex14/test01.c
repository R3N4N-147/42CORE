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
    int nb1;
    nb1 = 9; // testing
    printf("For your number: %d, ", nb1);
    nb1 = ft_sqrt(9);
    printf("the square root is: %d.\n", nb1);

    printf("For your number: 100, the square root is: %d", ft_sqrt(100)); // testing
    return (0);
}