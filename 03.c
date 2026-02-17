// in C, 0 is false, everything else is true
// in C23, we got actual booleans
#include <stdio.h>
// but if we're not using C23, there is stdbool.h
#include <stdbool.h>

int main(void)
{
    int x = 1;
    bool y = false;

    if (x)
    {
        printf("int x is true");
    }
    if (!y)
    {
        printf("bool y is not true");
    }

    return 0;
}
