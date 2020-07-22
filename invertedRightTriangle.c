#include <stdio.h>
int main()
{
    int i, j, n;
    int k =1;
    printf("enter the number of rows :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
