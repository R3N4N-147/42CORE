#include <unistd.h>

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}

int main()
{
    int i;
    i = 0;
    char c[] = "RENAN";
    ft_putstr(&c[i]);

    ft_putstr("\n");    
    ft_putstr("Wolfsburg");

    return (0);
}