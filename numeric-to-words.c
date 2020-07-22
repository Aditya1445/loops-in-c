/* C program which accepts a number and displays each digit in words.*/
#include <stdio.h>
int main()
{
    int n, num, r, digit;
    int sum = 0;
    printf("enter your desired number : ");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    num = sum;
    while (num > 0)
    {
        digit = num % 10;
        switch (digit)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
        num = num / 10;
    }
    return 0;
}