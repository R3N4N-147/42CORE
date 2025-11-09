#include <unistd.h>

void ft_swap(int *banana, int *mango)
{
    int temp = 0;
    temp = *banana;
    *banana = *mango;
    *mango = temp;
}

int main ()
{
    int a = 65; // 65 = A (ASCII)
    int b = 90; // 90 = Z (ASCII)
    write(1, &a, 1);
    write(1, "\n", 1);
    write(1, &b, 1);

    ft_swap(&a, &b);
    write(1, "\n\n", 2);

    write(1, &a, 1);
    write(1, "\n", 1);
    write(1, &b, 1);

    return (0);
}