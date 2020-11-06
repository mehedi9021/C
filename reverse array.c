#include<stdio.h>
int main()
{
    int i, a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("The numbers:");
    for(i=0; i<=9; i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nReverse numbers:");
    for(i=9;i>=0; i--)
    {
        printf("\n%d", a[i]);
    }
    return 0;
}
