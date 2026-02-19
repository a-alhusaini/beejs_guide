// arrays as pointers
#include <stdio.h>

// pointer decay: when an array is given to a function in C. sizeof gives the size
// of the pointer and not the size of the full array.
//
// You can use either array notation or the pointer notation shown in main. Same thing
// The line below is equivalent to
// void up(int arr[], int size) ...
//
// You can also do up(int arr[5], int size)
// this tells humans that you expect the array to have 5 elements
// But C doesn't care.. it will let you give it a 10000 element array anyway.
void up(int *arr, int size)
{
    printf("I wonder what the size of the input is\n");
    printf("Everything is the same size? %zu\n", sizeof arr);

    for (int i = 0; i < size; i++)
    {
        arr[i] += 1;
    }
}

int main(void)
{
    // in C, pointers & arrays are the very similar.. everything is a pointer
    int f[5] = {};

    // both are pointers to the first position
    // in fact, there is shorthand for the above
    int *j = &f[0];
    // above is same as
    j = f;

    // equivalence. These are identical
    // both will return the fourth element in the array
    // notice that the + 3 shifts the pointer 3 ints forward
    // and not 3 bytes. Compiler magic!
    printf("[] is %d\n", f[3]);
    printf("*(f+3) is %d\n", *(f + 3));

    // one last trick..
    // if *(f+3) works.. what about *(3+f)?
    f[3] = 4;

    printf("*(3+f): %d\n", *(3 + f));
    printf("*(f+3): %d\n", *(f + 3));

    // the above works because C knows that f is an int. and that ints are 4 bytes
    // so it jumps 4 bytes 3 times. what if I typecast this? lets leave that for later

    // notice that I passed the array directly without dereferencing it because f is really &f[0]
    up(f, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("f at index %d is %d\n", i, f[i]);
    }

    return 0;
}