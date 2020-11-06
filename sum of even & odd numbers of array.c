#include<stdio.h>
int main()
{
    int a[5], i, sum1=0, sum2=0;
    for(i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<=4; i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d\n", a[i]);
            sum1=sum1+a[i];
        }
        else
        {
            printf("%d", a[i]);
            sum2=sum2+a[i];
        }
    }
    printf("\n\n%d", sum1);
    printf("\n%d", sum2);
    return 0;
}
