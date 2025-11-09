#include <unistd.h>

void ft_putchar(char ch) // 2st function
{
    write(1, &ch, 1);
}

void ft_print_alphabet() // 1st function
{
    char ch;
    ch = 97; // 'a' or 97
    while (ch <= 122) // 'z' or 122
    {
        ft_putchar(ch); // call my 2st function
        ch++;
    }
}

int main()
{
    ft_print_alphabet(); // call my 1st function
    return 0;
}