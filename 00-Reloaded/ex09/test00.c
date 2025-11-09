#include <unistd.h>

int main()
{
    // int x = 42, y = 25;
    int x = 42, y = 36;
    write(1, "x = ", 4);
    write(1, &x, 1);
    write(1, "\n", 1);
    write(1, "y = ", 4);
    write(1, &y, 1);
    return (0);
}

// outputs: x = *
// outputs: y = %

// y = '%' I am a bit confuse 'cuz looks like I'm using hexadecimal to access the char
// but for x which is = '*' looks like I'm using decimal
// I don't know how to test

// REMEMBER, dont use values between 0 to 31 (ascii)