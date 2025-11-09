#include <unistd.h>

int main()
{
    // char a = '42', 
    // char b = '25';
    // char a = "42", b = "25";
    // int a = "42", b = "25";
    // int a = '97', b = '65';

    // write(1, "a = ", 4);
    // write(1, &a, 2);
    // write(1, "\n", 1);
    // write(1, "b = ", 4);
    // write(1, &b, 2);

    int c;
    c = 65;
    write(1, &c, 1);

    return (0);
}