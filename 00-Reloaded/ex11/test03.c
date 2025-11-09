#include <unistd.h>
#include <stdio.h> // printf()

int main()
{
    // int div, mod;
    int *div, *mod;
    int a, b;
    a = 42;
    b = 10;

    // div = a / b;
    // mod = a % b;
    *div = a / b;
    *mod = a % b;

    // write(1, &div, 1);
    // write(1, &mod, 1);

    // printf("div = %d, mod = %d.\n", div, mod); // it works
    printf("div = %p, mod = %p.\n", div, mod); // no
    printf("div = %p, mod = %p.\n", div, mod); // no

    return (0);
}