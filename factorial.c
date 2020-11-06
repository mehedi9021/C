#include<stdio.h>
int main()
{
    int a,i, f=1;
    printf("Enter an integer:");
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        f=f*i;
    }
    printf("\n\nFactorial is: %d",f);
    return 0;
}
