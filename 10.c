// arrays
#include <stdio.h>

int main(void)
{
    float f[4]; // array of 4 floats
    f[0] = 2.1;
    f[1] = 3.14;
    f[2] = 0.00;
    f[3] = 0.99;

    for (int i = 0; i < 4; i++)
    {
        printf("f: %f\n", f[i]);
    }

    // neat sizeof trick. Nice way to calculate bytesneeded
    printf("array size %zu\n", sizeof(double[48]));

    // you can initialize an array like this
    int x[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        printf("iter: %d x: %d ", i, x[i]);
    }
    printf("\n");

    // with initializers. don't put more elements than the arry size
    // int a[1] = {2,3,4}; // bad. gives warning

    // having initializer with fewer values yields 0 as default
    // safer than the garbage of empty initializer
    int jj[10] = {};
    int kk[10];

    for (int i = 0; i < 4; i++)
    {
        printf("Safe array: %d\n", jj[i]);
        printf("Unsafe array: %d\n", kk[i]);
    }
}