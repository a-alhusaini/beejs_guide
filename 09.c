// sizeof fun
#include <stdio.h>

void val_flip(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}

int main(void)
{
    // sizeof is a compile time tool that gives the size of a type in bytesf
    int a;
    printf("int size %zu\n", sizeof a);
    printf("int pointer size %zu\n", sizeof &a);

    int x = 0;
    int y = 1;
    printf("x: %d, y %d\n", x, y);
    printf("flipping... \n");
    val_flip(&x, &y);
    printf("x: %d, y %d\n", x, y);
    return 0;
}
