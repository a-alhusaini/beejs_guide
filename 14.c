// strings 2
#include <stdio.h>
#include <string.h>

int len(char arr[])
{
    int x = 0;

    while (arr[x] != '\0')
    {
        x += 1;
    }

    return x;
}

int main(void)
{
    char s[] = "hello";

    // I wonder what sizeof prints
    // This is bad for multiple reasons
    // sizeof returns the size. Not the length of a string. Watch out!
    printf("size_of s: %zu\n", sizeof s);

    // this string's size is 20 bytes!
    // but its length is 1!.. technically 2 if you count the terminator.
    char ss[20] = "a";
    printf("size_of ss: %zu\n", sizeof ss);

    // so how do you know how long a string is?
    // there are two ways: You tell the computer up front.
    // Or, end the string with a termination byte '\0'.
    // this byte tells C that the string is over.
    // see the above len function to get a view of how this works
    printf("length of string: %d\n", len(ss));

    // string.h provides this functionality out of the box
    printf("strlen %zu\n", strlen(ss));

    // what about copying strings?
    // using a = b just makes a point to b
    // so you need to copy strings by using strcopy (available in string.h)
    // or, use similar logic to the len loop above.
    // Just make sure that the receiving string has enough space to hold the original!
    char j[] = "hello";
    char k[1000]; // change this to 1 to get error. Notice that gcc doesn't give a warning!

    // first argument is where to copy to, second is where to copy from
    strcpy(k, j);

    printf("strcpy result: %s\n", k);
    return 0;
}