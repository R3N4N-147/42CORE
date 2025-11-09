#include <unistd.h>

void ft_putchar(int x)
{
    write(1, &x, 1);
}

void ft_print_numbers()
{
    int x = 48;
    while (x <= 57)
    {
        ft_putchar(x);
        x++;
    }
}

int main()
{
    ft_print_numbers();
    return (0);
}