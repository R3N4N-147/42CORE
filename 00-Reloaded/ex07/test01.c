#include <unistd.h>

int main()
{
    int x = 48; // Dec number to access the ASCII table character for zero (0)
    while (x <= 57) // nine (9)
    {
        // write(1, "R"&x, 1); // testing -> result: NO
        x++;
    } 
    return (0);
}