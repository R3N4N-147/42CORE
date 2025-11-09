#include <unistd.h>
#include <stdio.h>

int main()
{
    int nb;
    int fac;
    int div = 0;
    int mod = 0;
    int nb_mod;
    int nb_div;
    int count = 0;
    int count_copy = 0;
    int i;

    nb = 0; // 
    // nb = 1;
    // nb = 6;
    // nb = 25;

    if( nb == 0)
    {
        nb = 1;
    }
    if(nb < 0)
    {
        write(1, "Is negative.", 12);
        // return (0);
    }
    else
    {
        fac = nb;
        while (fac != 1) // OR (fac > 1) ?
        {
            nb = nb * (fac - 1); // 
            fac--;
        }
    }

    printf("nb is: %d\n", nb); // testing. So far, so good!

    nb_mod = nb;
    nb_div = nb;
    printf("nb_mod is: %d\n", nb_mod); // testing
    printf("nb_div is: %d\n\n", nb_div); // testing

    while(nb_div > 0)
    {
        nb_div = nb_div / 10;
        count++;
        printf("count value is: %d\n", count); // checking last position of count
    }
    printf("\n");

    int arr[count]; // here I now which size my Array will have.

    count_copy = count;
    while (count > 0) // 3
    {
        arr[count] = nb_mod % 10;
        nb_mod = nb_mod / 10;
        count--;
    }

    i = 0;
    while (count_copy > i) // almost there :)
    {
        printf("count is %d. ", i);
        printf("arr[count] is: %d\n", arr[i + 1]);
        i++;
    }
    return (0);
}