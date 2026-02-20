// files AKA streams
#include <stdio.h>

int main(void)
{
    // a stream is something you push/pull data from
    // these turn out to be the same!
    // We've "pushed" data into the stdout stream
    printf("hi!\n");
    fprintf(stdout, "hi!\n");

    // streams are either text streams or binary streams
    // the rule is if you can edit the stream in an editor, its a text stream

    // The FILE * is the type used for files.. which, are streams
    FILE *fp;

    // fopen = file open, lots of functions have a prefix like this
    // To find info about C functions, use man 3 <NAME OF FUNCTION>
    // i.e: man 3 fopen for documentation
    //
    // use man 2 THING for kernel commands i.e: man 2 open
    fp = fopen("./hello.txt", "r");

    char c = fgetc(fp);
    printf("first char in hello.txt: %c\n", c);

    fclose(fp);

    // hmm, what if I never close my files?
    int count = 0;
    while (1)
    {
        fp = fopen("./hello.txt", "r");
        count++;
        // NULL pointer means something went wrong
        if (fp == NULL)
        {
            printf("error openning file!. Loops are bad kids\n");
            printf("failed after openning %d files \n", count);
            break;
        }
    }

    return 0;
}