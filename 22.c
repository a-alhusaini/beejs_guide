// pointers, arithmetic
#include <stdio.h>
#include <string.h>

int my_strlen(char *a)
{
    int count = 0;
    // this here is pointer arithmetic, you can add and subtract to a pointer
    // and it will move forward based on its type. In this case, it'll move 1 byte
    // as chars are 1 byte long.
    while (*(a++) != '\0')
    {
        count++;
    }
    return count;
}

// note: this sort of implementation is unsafe in real life. can easily buffer overflow.
void my_strcpy(char *to, char *from)
{
    for (int i = 0; *(from + i) != '\0'; i++)
    {
        *to++ = *(from + i);
    }
    *to = '\0';

    // another approach to achieve the same thing is
    // while ((*to++ = *for++))
    // this works because the null terminator evaluates to 0 and thus that
    // would be the result of the assignment expression.
    // thus returning false and ending the loop.
    // this works here due to pointer decay, so even if the from is a literal
    // when it is passed in, its decayed into a pointer and thus can be incremented
    // this following code would fail though. Even gives a compiler error.
    // int a[] = {1, 2, 3};
    // a++;
}

int main(void)
{
    printf("length of input: %d\n", my_strlen("hello world!"));

    char *name = "john";
    char copy[20];

    my_strcpy(copy, name);
    printf("copied string is: %s\n", copy);
}