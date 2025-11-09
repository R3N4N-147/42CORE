#include <unistd.h>

int main()
{
    int x = '0'; // when using ' ', I`m saying to the program make the work using the char ...
    while (x <= '9') 
    {
        write(1, &x, 1);
        x++;
    } 
    return (0);
} 
// manipulating through the characters that I knew were inside the ASCII table
// I had an idea for testing, and it worked. :)