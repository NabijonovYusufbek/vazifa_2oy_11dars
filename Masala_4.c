#include <stdio.h>

int main()
{
    int sonlar[3][4] = {{ 0, 1,0,1,},
                        {1, 1, 0, 0},
                        {0, 0, 1, 1}};
    int a, b;
    printf("Qator va prindiqni kiriting: ");
    scanf("%d %d", &a, &b);

    if (sonlar[a][b] == 0)
    {
        printf("%d-qator,%d-orindiq: Bosh\n",a,b);
    }
    else
    {
        printf("%d-qator,%d-orindiq: Band\n",a,b);
    }
}
