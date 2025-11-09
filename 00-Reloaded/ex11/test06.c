#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = (48 + (a / b)); // 48 + result = ASCII number
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

    // ft_putchar(&div); WRONG, ATENTION!!!
    ft_putchar(div);
    ft_putchar(10); // integer 10 is '\n' (new line) in ASCII
    // ft_putchar(&mod); WRONG, ATENTION!!!
    ft_putchar(mod);
    return (0);
}