#include <stdio.h>

void chegirma()
{
    int narxlar[] = {10000, 25000, 50000, 12000, 8000};

    int temp = 0;
    int yangiNarx = 0;
    for (int i = 0; i < 5; i++)
    {

        temp = (narxlar[i] * 10) / 100;
        yangiNarx = narxlar[i] -= temp;
        printf("%d\n", yangiNarx);
    }
}
int main()
{
    chegirma();
}