#include <unistd.h>

void ft_putchar(char isneg)
{
    if(isneg == 'Z')
    {
        write(1, "0 is unsigned", 13);
    }
    else write(1, &isneg, 1);
}

void ft_is_negative(int n)
{
    if (n == 0)
    {
        ft_putchar('Z');
    }
    if (n < 0 || n > 0)
    {
        if (n < 0)
        {
            ft_putchar('N');
        }
        else ft_putchar('P');
    }
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
    write(1, "\n", 1);
    // Blazing Job! :)
    return (0);
}