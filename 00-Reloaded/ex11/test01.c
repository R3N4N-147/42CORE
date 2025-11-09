#include <unistd.h>

int main()
{
    int *div, *mod, a, b;
    a = 42;
    b = 10;

    *div = a / b;
    *mod = a % b;

    write(1, &div, 1);
    write(1, &mod, 1);

    return (0);
}

// No output ... segmentation fault