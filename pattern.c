#include<stdio.h>
int main()
{
    int i,j,a=1;
    int n;
    printf("\n How many lines you want to enter :");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}