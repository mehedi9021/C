#include<stdio.h>
int main()
{
    int a, i, sum=0;
    scanf("%d", &a);
    for(i=0; i<=a; i++)
    {
        sum=sum+i;
    }
    printf("The number is : %d", sum);
    return 0;
}
