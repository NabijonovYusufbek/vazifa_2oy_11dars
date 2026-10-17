#include <stdio.h>

struct Mahsulot
{
    char nomi[30];
    int narxi;
    int soni;
};
int main()
{
    struct Mahsulot n1;
    printf("Mahsulot: ");
    scanf("%s", n1.nomi);
    printf("Narxi: ");
    scanf("%d", &n1.narxi);
    printf("Soni: ");
    scanf("%d", &n1.soni);

    printf("Mahsulot: %s\n", n1.nomi);
    printf("Narxi: %d\n", n1.narxi);
    printf("soni: %d\n", n1.soni);
    printf("Ombor qiymati: %d\n", n1.narxi * n1.soni);
}
