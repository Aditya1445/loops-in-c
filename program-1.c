/*C program to accept a four digit number from user. Count zero, odd and even digits in the entered number.*/
#include <stdio.h>
int main()
{
    int num, n;
    int nodd = 0, neven = 0, nzero = 0;
    printf("enter the number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        num = n % 10;
        n = n / 10;
        if (num != 0 && num % 2 == 0)
        {
            neven++;
        }
        else if (num == 0)
        {
            nzero++;
        }
        else
        {
            nodd++;
        }
    }
    printf("\nOdd digit : %d \nEven digit : %d\nZeros : %d", nodd, neven, nzero);
    return 0;
}