#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = (48 + (a / b)); // result + 48 = ASCII number
    *mod = (48 + (a % b)); // result + 48 = ASCII number
}

int main()
{
    int a = 42; 
    int b = 10;
    int div = 0; 
    int mod = 0;

    ft_div_mod(a, b, &div, &mod); // coping a and b values and sending to ft_div_mod() // & sending the address
    write(1, &div, 1);
    write(1, "\n", 1);
    write(1, &mod, 1);

    write(1, "\n\n", 2);
    a = 99; // it will work until 99, after that I must improve the logic
    b = 10;
    div = 0; 
    mod = 0; 
    ft_div_mod(a, b, &div, &mod);
    write(1, &div, 1);
    write(1, "\n", 1);
    write(1, &mod, 1);

    return (0);
}