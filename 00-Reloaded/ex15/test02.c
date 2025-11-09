#include <unistd.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0') // the last position from a string is NULL (OR '\0')
    {
        // write(1, c[i], 1); // REMEMBER!!! the 1st position from an array is already a pointer to its address
        write(1, &str[i], 1); // BUT to access all the slots, remember to do like this. Right :)
        i++;
    }
}

int main()
{
    int i;
    i = 0;
    char c[] = "RENAN"; // to stores multiple char, use and array (so also called strings)
    ft_putstr(&c[i]);
    return (0);
}