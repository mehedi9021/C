#include<stdio.h>
int main()
{
    int a[5], i, b=100;
    for(i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<=4; i++)
    {
        if(b>a[i])
        {
            b=a[i];
        }
    }
    printf("%d",b);
    return 0;
}
