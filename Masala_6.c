#include <stdio.h>

void rekursiya(int son)
{
    printf("%d\n", son);
    if (son > 1)
    {
        rekursiya(son - 1);
    }
}
int main()
{
    int n;
    printf("n= ");
    scanf("%d", &n);
    rekursiya(n);
    printf("Xabar yuborildi");
}