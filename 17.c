// files 2
#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("hello.txt", "r");

    // we use int instead of char because EOF might not
    // fit in a normal char. Its a macro so how am I supposed to know what it is anyway?
    int c;
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }

    // always always always close whatever
    // file you open. Try commenting out the next line
    // no error will happen, C is out to kill you.
    // explenation: a process can only have so many files open
    // at once. Exhaust that limit by having dangilng files,
    // and further attempts to open files fail. And the pointers
    // to the old files stay in memory.. causing a defacto leak
    // C will kill you if you're not careful.. and when you're careful too!
    fclose(fp);

    // You think C isn't trying to kill you?
    // try to access fp... anything done to fp
    // now is undefined behaviour. fclose doesn't
    // do anything to your old pointer.
    printf("\n%02x\n", *fp);
    return 0;
}