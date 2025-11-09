#include <unistd.h>

int main ()
{
    int temp = 0;
    // int a = 0;
    // int b = 0;
    int a = 50; // 50 = 2 (ASCII)
    int b = 75; // 75 = K (ASCII)
    // int* a = 50;
    // int* b = 75;


    write(1, &a, 1);
    write(1, "\n", 1);
    write(1, &b, 1);

    return (0);
}