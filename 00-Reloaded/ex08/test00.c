#include <unistd.h>

int main()
{
    int n = 42;

    if (n < 0)
    {
        write(1, "N", 1); // " " means the string 
    }
    else write(1, "P", 1);

    // write(1, '\n', 1); how NO to do it! I was giving an *integer* to the function
    // write(1, "/n", 1); how NO to do it!
    write(1, "\n", 1); // Good job! :)

    n = -24;

    if (n < 0)
    {
        write(1, "N", 1); // " " means the string 
    }
    else write(1, "P", 1);

    return (0);
}