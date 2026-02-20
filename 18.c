// more files!
#include <stdio.h>

int main(void)
{
    // in the last example, we read char by char
    // I BELIEVE IN LINE BY LINE DATA INGESTION!!!!
    // man 3 fgets to the rescue!
    // I wonder if anyone ever ends up reading this git repo
    // and sees my slow descent into madness for what it is
    // one of my friends created a wasm compiler wtih AI
    // and I'm here learning C... If you see this rant. Get in touch
    // I like to meet people who read random github repos for fun
    FILE *fp = fopen("quote.txt", "r");

    char buffer[512];

    // Note: &buffer[0] = buffer. fgets expects a pointer
    // to a character.. prepending & gives a pointer to an
    // array of 512 chars. This gives a warning. But the pointer to a 512
    // element array should be equivalent to a pointer
    // to the first char of that array. Need more testing to confirm
    // As I'm not 100% sure if my logic is sound or if this is dumb luck
    // I'll use pointer decay.. aka buffer.. which decays a pointer to
    // the address of an array of 512 elements to a pointer to a char
    //
    // sidenote: use sizeof instead of hardcoding the size. sizeoff returns bytecount after all!
    char *line = fgets(buffer, sizeof buffer, fp);
    printf("%s", line);

    // according to man 3 fgets. the returned output from fgets
    // is NULL when EOF or error is encountered, ferror and feof are to
    // be used to figure out which is which. See the relevant man pages
    while ((fgets(buffer, sizeof buffer, fp)) != NULL)
    {
        printf("%s", buffer);
    }
}