#include <unistd.h>

int main()
{
    int x = 0;
    while (x <= 10)
    {
        write(1, "R1", 2); // "string R". Recall that a string ends with an \0
        write(1, "\n", 1);
        // write(1, 'R2', 2); // here I'm giving integer value of "the char R" 
        // they are very close, but be aware about the differences
        write(1, "\n", 1);
        // write(1, 82, 2); // 82 is decimal for the char R in ASCII. i'm giving an integer 
        x++;
        // for both cases ('R2' and 82) I'm giving an integer, the program likely crash
    }
    return 0;
}