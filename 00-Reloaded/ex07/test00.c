#include <unistd.h>

int main()
{
    int x = 48;
    while (x <= 57)
    {
        write(1, "R", 1);
        write(1, &x, 1);
        x++;
    }
    return 0;
}
