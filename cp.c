#include <stdio.h>

int main(void)
{
    FILE *file3 = fopen("mikey.txt", "r");
    FILE *file4 = fopen("key.txt", "w");
    char bold;
    while((bold = fgetc(file3)) != EOF)
        fputc(bold, file4);
    fclose(file3);
    fclose(file4);
}