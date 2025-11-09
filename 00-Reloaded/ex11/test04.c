#include <unistd.h>

int main()
{
    int div, mod;
    int a;
    a = 42; // for this case

    div = (48 + (a / 10)); // 4 + 48 = 54 = number 4 (ASCII)
    mod = (48 + (a % 10)); // 2 + 48 = 50 = number 2 (ASCII)

    write(1, &div, 1);
    write(1, "\n", 1);
    write(1, &mod, 1);

    return (0);
}