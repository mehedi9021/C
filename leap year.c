#include<stdio.h>
int main()
{
    int n;
    printf("Enter the year:");
    scanf("%d",&n);
    if (n%4==0)
    {
        printf("\nThis year is leap year : %d",n);
    }
    else
    {
        printf("\nThe year is not leap year");
    }
    return 0;
}
