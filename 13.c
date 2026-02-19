// strings
#include <stdio.h>

int main(void)
{

    // these are string literals.
    // AKA: hard coded strings
    // Notice that you have the usual escape sequences. yay
    "Hello, World!\n";
    "I am a string!";
    "when asked if this string has quotes, the answer was \"yes\"";

    // here is anohter literal
    char *s = "hello world!\n";
    printf("%s", s);

    // you can also specify strings as arrays
    // this is an array of 16 chars
    // the last char is the terminaotr \0
    char ss[16] = "Hello, World!\n";

    printf("%s", ss);

    // counting length of strings is hard work
    // so lets do this instead
    char sss[] = "I am a very long string.. don't count me!";

    printf("%s\n", sss);

    // this works with char *s also
    for (int i = 0; i < 10; i++)
        printf("%c", sss[i]);
    printf("\n");

    // whats the difference between char *s and char sss[]?
    // char *s is a string literal. It is read only, and sss[] is
    // an array of chars. So it can be customized
    // it is mutable. Note; single quote is for chars. Use it and not double quote
    sss[0] = 'C';
    printf("edited sss[0]: %c\n", sss[0]);

    return 0;
}