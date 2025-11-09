#include <unistd.h>
#include <stdio.h>

int main()
{
    int nb;
    // printf("square root check, give a int number iqual or bellow 2.147.483.647.");
    nb = 9;

    int counter;
    int result;

    if (nb < 0)
    {
        return (0);
    }

    counter = 0;
    result = 0; // loop: result must be under the give number (good limit) && 46340 -> system limit 32bits
    while(result < nb && counter <= 46340)
    {
        result = counter * counter;
        if(result == nb)
        {
            //return counter;
            printf("Square root: %d", counter);
        }
        counter++;
    }
    
    // printf("Square root: %d", counter);
    return (0);
}

// Instructions - ideas

// A square root is a number which, when multiplied by itself, gives the original number. 
// For example, the square root of 9 is 3 because 3 multiplied by itself 
// 3 times 3 equals 9

// In a 32 bits system (00000000 00000000 00000000 00000000) OR 4 byte
// an int has (01111111 11111111 11111111 11111111) that means 2.147.483.647 positions available
// considering the negative
// an int has (11111111 11111111 11111111 11111111) that means MORE -2.147.483.648 positions available

// -2.147.483.648 to 2.147.483.647.

// sqrt( 2.147.483.647 ) is approximately equals 46340.95
// That is the biggest number we could use for a int
// twice considering that we could use an unsigned int 
// again ... 4 byte (32-bit) value, ranging from 0 to 4,294,967,295

// lets be pratical ... and look for square roots bellow 46340. So, just a regular int. 

// 