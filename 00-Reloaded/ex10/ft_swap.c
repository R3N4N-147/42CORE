#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_putchar(int x)
{
    write(1, &x, 1);
}

int main ()
{
    int a = 50; // 50 = 2 (ASCII)
    int b = 75; // 75 = K (ASCII)
    ft_putchar(a);
    ft_putchar(10); // integer 10 is '\n' (new line) in ASCII
    ft_putchar(b);

    ft_swap(&a,&b);
    ft_putchar(10);
    ft_putchar(10);

    ft_putchar(a);
    ft_putchar(10);
    ft_putchar(b);

    return (0);
}