#include <stdio.h>

int main()
{

    int orindiqlar[] = {1, 0, 1, 1, 0, 0, 1, 0, 1, 0};

    int n;
    printf("Joyni kiriting: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        if (orindiqlar[n] == 0)
        {
            printf("Joy mavjud\n");
            return 0;
        }
    }
    printf("Joy band");
}