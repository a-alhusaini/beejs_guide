#include <stdio.h>

// pointers
// self explanatory so far
// this gives a reference to i

void increment(int *i)
{
    // * is also the dereference operator
    // this line reads the pointer, dereferences it
    // and changes the original value
    *i += 1;
}

int main(void)
{
    int a = 2;
    printf("%d\n", a);

    // & is the reference operator.. gives address of
    // a variable
    increment(&a);

    // as you can see, it has changed.
    printf("%d\n", a);

    // when declaring pointers
    // the * is where hte poitner is
    // example.. a is not a pointer
    int a, *b;
    // other example, c is a pointer
    int *c, d;

    // pointers can be set to NULL which means uninitialized
    // Will crash if you try to dereference them
    // int *j = NULL;
    // *j;

    return 0;
}