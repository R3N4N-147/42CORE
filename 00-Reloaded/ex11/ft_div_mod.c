#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = (48 + (a / b));
    *mod = (48 + (a % b));
}

void ft_putchar(int x)
{
    write(1, &x, 1);
}

int main()
{
    int a = 42;
    int b = 10;
    int div = 0;
    int mod = 0;

    ft_div_mod(a, b, &div, &mod);
    ft_putchar(div);
    ft_putchar(10);
    ft_putchar(mod);
    return (0);
}