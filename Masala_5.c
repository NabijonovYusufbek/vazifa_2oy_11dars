#include <stdio.h>

int main()
{
    char ism[30], familya[30];

    printf("Ism va familya kiritin: ");
    scanf("%s %s", ism, familya);

    int i = 0;
    while (ism[i] != '\0')
    {
        printf("%c%s", ism[i], familya);
        return 0;
    }
}