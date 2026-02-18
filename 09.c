// sizeof fun
#include <stdio.h>

int main(void)
{
    // sizeof is a compile time tool that gives the size of a type in bytesf
    int a;
    printf("int size %zu\n", sizeof a);
    printf("int pointer size %zu\n", sizeof &a);
    return 0;
}
