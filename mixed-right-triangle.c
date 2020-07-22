#include<stdio.h>
int main()
{
    int i, a=5,b;
    for(b=1; b<=5; b++)
    {
        for(i=1; i<b; i++)
        {
            printf(" ");
        }
        for(i=1; i<=a; i++)
        {
            printf("%d", i);
        }
        printf("\n");
        a--;
    }
    int c=4, d;
    for(d=2;d<=5;d++)
    {
        for(i=1;i<c;i++)
        {
            printf(" ");
        }
        for(i=1; i<=d; i++)
        {
            printf("%d", i);
        }
        printf("\n");
        c--;
        
    }
    return 0;
    
}