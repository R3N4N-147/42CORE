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

    printf("%d", nb); // so far, so good!

    // nb_copy = nb;
    // while(nb_copy != 0)
    // {
    //     nb_copy = nb_copy / 10;
    //     count++;
    // }
    // nb_copy = nb;
    // while (count != 0)
    // {
    //     arr[count] = nb_copy % 10;
    //     write(1, &arr[count], 1);
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