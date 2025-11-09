#include <unistd.h>

int main()
{
    int div, mod, a, b;
    a = 42;
    b = 10;

    div = a / b;
    mod = a % b;

    write(1, &div, 1);
    write(1, &mod, 1);

    write(1, "R\n", 2); // OK output: R (text)
    // write(1, '82', 1);
    // write(1, 82, 1);
    write(1, "82\n", 3); // OK output: 82 (text)
    char n = 'R';
    write(1, &n, 1); // OK output: R (text)
    write(1, "\n", 1);
    int R = 82;
    write(1, &R, 1); // OK output: R (text)

    // how print numbers like, 150 or 18966, etc ... previously saved in a var?
    // my feeling is that I very close to figure out in the next exercises

    return (0);
}