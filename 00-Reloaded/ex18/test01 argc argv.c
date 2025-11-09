#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv) // argc = argument count, argv[0] stores the program's name [1] first thing [2]second thing
{
    int i = 1; // starting in 1 to ignore program's name
    int j;

    while (i < argc) // Loop through arguments given -> [0] program name, [1] 1st arg, [2] 2nd arg ...
    {
        j = 0; // Inicializa j para percorrer a string de cada argumento
        while (argv[i][j] != '\0') // (arg[i][char[i] from that arg]) until find char == null
        {
            ft_putchar(argv[i][j]); // print char
            j++; // go to next char
        }
        ft_putchar('\n'); // print new line
        i++; // go to next argument
    }
    return 0;
}

// cc the programa
// tipe in terminal sth like: ./a.out Renan Brazil Alemanha Product Manager

// program name: ./a.out 
// names to test: Renan Brazil Alemanha Product Manager