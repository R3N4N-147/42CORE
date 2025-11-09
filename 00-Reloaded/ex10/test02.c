#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main ()
{
    int a = 50; // 50 = 2 (ASCII)
    int b = 75; // 75 = K (ASCII)
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