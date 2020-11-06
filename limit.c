#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    if(n>=1 && n<=10)
    {
        printf("Res %f",(n+n));
    }
    else if (n>=11 && n<=20)
    {
        printf("Res %f",(n*n));
    }
    else if (n>=21 && n<=30)
    {
        printf("Res %f",(2*n-5));
    }
    else if (n>=31 && n<=40)
    {
        printf("Res %f",(3*n/5));
    }
    else
    {
        printf("Res %f",(5*n*5*n));
    }
    return 0;
}
