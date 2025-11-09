#include <unistd.h>

int main()
{
    int c = 'R'; // The ASCII value of 'R' is 82 // 'R' represents the number 82 which in ASCII slot the char R
    write(1, &c, 1); // basically I did a putchar() function.

    write(1, "\n", 1);

    char letter = 'R';
    write(1, &letter, 1);

    write(1, "\n", 1);

    char test = 'K';
    write(1, &test, 1);

    return (0);
}

// Lets evolve the idea until create a putstring() function ..