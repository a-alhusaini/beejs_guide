// <> vs "" hmm, I wonder what the difference is
#include <stdio.h>

int main(void)
{
    int i = 2;
    float f = 0.5;
    // pointer to chars? hmm, need to investigate this.
    char *s = "Hello, World!";

    // always compile with warnings, or mix these
    // to see what happens
    printf("%s %f %d\n", s, f, i);
    return 0;
}