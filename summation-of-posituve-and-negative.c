#include <stdio.h>
int main()
{
    int total;
    int i;

    int positivesum = 0;
    int negativesum = 0;

    printf("How many numbers are to be added : ");
    scanf("%d", &total);

    int numbers[total];
    for (i = 0; i < total; i++)
    {
        printf("enter number %d :", (i+1));
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < total; i++)
    {
        if (numbers[i] < 0)

        {
            negativesum += numbers[i];
        }
        else
        {
            positivesum += numbers[i];
        }
    }
    printf("You have entered : \n");
    for (i = 0; i < total; i++)
    {
        printf("%d ", numbers[i]);
    }

    //8
    printf("\nPositive numbers sum : %d", positivesum);
    printf("\nNegative numbers sum : %d\n", negativesum);
    return 0;
}