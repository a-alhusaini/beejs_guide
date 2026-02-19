// challenge 1
/*
The Task:

Create a struct called Point with an x and y (both int).

Create an array of 3 Point structs.

Use a pointer to iterate through the array and set the values (don't use the [] index operator).

Print the memory address of each element.
*/
#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main(void)
{
    struct Point points[3];

    // we create a custom pointer because arrays have a fixed starting pointer.
    // it can't be incremented
    struct Point *pp = points;

    for (int i = 0; i < 3; i++)
    {
        pp->x = i;
        pp->y = i * 2;
        printf("%p\n", pp);
        pp++;
    }

    // iterators are for noobs
    // check it!
    pp = points;
    while (pp < points + 3)
        printf("address %p, x: %d, y: %d\n", pp, (*pp).x, (*pp++).y);
}