#include <stdio.h>

int main()
{
    FILE *f = fopen("xaridlar.txt", "r");

    int son;
    int count = 0;
    while (fscanf(f, "%d", &son) == 1)
    {
        if (son > 50000)
        {
            count++;
        }
    }
    printf("Katta xaridlar soni: %d", count);
}