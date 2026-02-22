#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("cats.txt", "r");

    char name[24];
    char unit[4];
    float weight;

    while (fscanf(fp, "%s %f %s", name, &weight, unit) != EOF)
    {
        printf("Cat type: %s\n", name);
        printf("Cat Weight: %f\n", weight);
    }

    fclose(fp);

    fp = fopen("output.txt", "w");

    fputc('C', fp);
    fputs("\n", fp);
    fprintf(fp, "The last cat was a %s\n", name);

    fclose(fp);
    fp = NULL;

    // files are streams and streams are files
    // therefor,
    fp = stdout;
    fprintf(fp, "I have printed to a file\n");

    return 0;
}