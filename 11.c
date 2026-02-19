// array 2
#include <stdio.h>

int main(void)
{
    // C does not believe in array bounds
    // check it out!
    int f[1] = {};

    for (int i = 0; i < 7; i++)
    {
        printf("array at index %d: %d\n", i, f[i]);
    }

    // you can initialize multidimensional arrays in C
    int o[1][2] = {{2, 2}};

    // you can also specify values by index
    // this sets index 2 to 9
    // note: it continues from wherever the index is set
    int w[4] = {[2] = 9, 2};

    for (int i = 0; i < 4; i++)
    {
        printf("w array iter: %d, val: %d\n", i, w[i]);
    }
}