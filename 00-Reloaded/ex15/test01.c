#include <unistd.h>

int main()
{
    // Remember char always stores ONE char (1 byte) (1 byte = 8 bits)
    // char c = 'R'; // This works but
    // char c = 'RENAN'; // This will basically produce an error. Don't use char type to storering multiple characters

    char c[] = "RENAN"; // to stores multiple char, use and array (so also called strings)

    int i;
    i = 0;
    while(c[i] != '\0') // the last position from a string is NULL (OR '\0')
    {
        // write(1, c[i], 1); // REMEMBER!!! the 1st position from an array is already a pointer to its address
        write(1, &c[i], 1); // BUT to access all the slots, remember to do like this. Right :)
        i++;
    }

    return (0);
}