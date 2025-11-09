#include <unistd.h>

int main()
{
    char c = 'a';
    while(c <= 'z')
    {
        // write(1, &c++, 1); just a test. This doesn`t work
    }
    return 0;
}