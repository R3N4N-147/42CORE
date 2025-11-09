#include <unistd.h>

int main ()
{
    int *temp;
    temp = 0;

    int a = 50; // 50 = 2 (ASCII)
    int b = 75; // 75 = K (ASCII)

    write(1, &a, 1);
    write(1, "\n", 1);
    write(1, &b, 1);

    return (0);
}