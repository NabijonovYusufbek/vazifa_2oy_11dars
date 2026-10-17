#include <stdio.h>

int binary(int books[], int n, int target)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int middle = (left + right) / 2;
        if (books[middle] == target)
        {
            return middle;
        }
        else if (books[middle] > target)
        {
            right = middle - 1;
        }
        else
        {
            left = middle + 1;
        }
    }
    return -1;
}
int main()
{
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270};
    int n = 12;
    int target;
    printf("Qidirilyotgan kitob raqamni kiriting: ");
    scanf("%d", &target);
    if (binary(books, n, target) != -1)
    {
        printf("Kitob topildi\nIndeksi: %d", binary(books, n, target));
    }
    else
    {
        printf("Kitob toplimadi!");
    }
}