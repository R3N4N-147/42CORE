#include <unistd.h>

void ft_putchar(char neg)
{
    write(1, &neg, 1);
}

void ft_is_negative(int n)
{
    if (n < 0)
    {
    ft_putchar('N');
    }
    if (n < 0)
    {
    ft_putchar('N');
    }
    else ft_putchar('P');
}

int main()
{
    ft_is_negative(42);
    write(1, "\n", 1);
    // Good Job! :)
    ft_is_negative(-24);
    write(1, "\n", 1);
    // Amazing Job! :) 
    ft_is_negative(0);
    write(1, "\n\n", 2);
    // Blazing Job! :) - - - - Just doing some tests....
    write(1, "Hi there, I was playing around, nothing else to do here. :)", 59); // 
    return (0);
}