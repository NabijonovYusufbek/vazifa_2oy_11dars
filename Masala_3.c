#include <stdio.h>

void almashtir(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 15, b = 40;
    almashtir(&a, &b);
    printf("a=%d\nb=%d\n", a, b);
}