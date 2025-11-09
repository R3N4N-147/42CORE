#include <unistd.h>

int main()
{
    int c;
    c = 'A';
    while (c <= 'Z')
    {
        write(1, &c, 1);
        c++;
    }
    return 0;
}