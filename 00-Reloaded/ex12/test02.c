#include <unistd.h>
#include <stdio.h>

int main()
{
    int nb;
    int fac;
    int div = 0;
    int mod = 0;
    int nb_copy;
    int count = 0;
    int arr[count];

    nb = 6;

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

    nb_copy = nb;
    printf("nb_copy is: %d\n\n", nb_copy); // testing

    while(nb_copy > 0)
    {
        nb_copy = nb_copy / 10;
        printf("nb_copy is: %d\n", nb_copy);
        count++;
    }

    nb_copy = nb;
    printf("count value is: %d\n\n", count); // checking last position of count
    
    // while (count > 0)
    // {
    //     arr[count] = nb_copy % 10;
    //     //write(1, arr[count], 1);
    //     printf("arr[count] is: %d\n", arr[count]);
    //     count--;
    // }


    //   0 iteration: nb = 6;   fac = 6
    // 1st iteration: nb = 6;   fac = 5       ->   6*5 = 30 
    // 2nd iteration: nb = 30;  fac = 4       ->  30*4 = 120
    // 3rd iteration: nb = 120; fac = 3       -> 120*3 = 360
    // 4th iteration: nb = 360; fac = 2       -> 360*2 = 720
    // 4th iteration: nb = 720; fac = 1       -> 720*1 = 720
    return (0);
}