#include <stdio.h>

void cube(int *arr, int r, int c)
{
    int i, j;

    printf("\nCubes of all elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", (*(arr + i * c + j)) * (*(arr + i * c + j)) * (*(arr + i * c + j)));
        }
        printf("\n");
    }
}

int main()
{
    int r, c, i, j;

    printf("Enter array's size: ");
    scanf("%d", &r);

    c = r; // for same 2×2 example

    int a[r][c];

    printf("\nEnter array elements:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cube((int *)a, r, c);

    return 0;
}