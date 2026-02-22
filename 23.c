// the power of void *
#include <stdio.h>
#include <string.h>

void *my_memcpy(void *dst, void *src, size_t bytes)
{
    // cast void into chars. chars are 1 byte, so we can move the pointers
    // byte by byte and copy them.
    char *d = dst, *s = src;

    for (int i = 0; i < bytes; i++)
    {
        *d++ = *s++;
    }

    // return dst and not d. d is pointing at the end of the buffer
    // which isn't what is expected in C.
    return dst;
}

int main(void)
{
    // void* is a pointer to an unknown type.
    // it can be cast into other pointer types to be used
    // this is useful when copying memory for example
    char *greeting = "hello";
    char copy[40];

    my_memcpy(copy, greeting, sizeof(greeting));
    printf("copied memory: %s\n", copy);
    printf("sizeof greeting: %zu\n", sizeof(greeting));

    // see any errors? Well, remember, sizeof returns the size of the pointer!
    // use strlen instead!

    my_memcpy(copy, greeting, strlen(greeting));
    printf("copied memory: %s\n", copy);
    printf("sizeof greeting: %zu\n", strlen(greeting));

    // see any issues? well, yes, the string isn't being null terminated!
    my_memcpy(copy, greeting, strlen(greeting) + 1);
    printf("copied memory: %s\n", copy);
    printf("sizeof greeting: %zu\n", strlen(greeting) + 1);
}