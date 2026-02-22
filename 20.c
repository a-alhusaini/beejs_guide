// storing binary data
#include <stdio.h>

int main(void)
{
    FILE *fp;

    // append b to work with binary data
    fp = fopen("output.bin", "wb");

    unsigned char buffer[4] = {
        2,
        3,
        4,
        4,
    };

    // write input of the specified size into the file.
    fwrite(buffer, sizeof(char), sizeof(buffer), fp);

    fclose(fp);

    fp = fopen("output.bin", "rb");

    char c;
    // read one byte at a time and put its value into C
    while (fread(&c, sizeof(c), 1, fp) > 0)
    {
        printf("%d\n", c);
    }
}
