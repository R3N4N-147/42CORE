#include <unistd.h>

int main()
{
    char c;
    for(c = 'a'; c <= 'z'; c++) {
        write(1, &c, 1);
    }
    return(0);
}