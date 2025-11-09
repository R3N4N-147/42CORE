#include <unistd.h>

void ft_putchar(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main (int argc, char **argv) // command line arguments -> check man
{
    int i;
    i = 0;
    while(i < argc)
    {
        // argc[];
        ++i;
    }
}