#include<stdio.h>
int main()
{
    int a[5], i, b=0;
    for(i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Even Numbers:");
    for(i=0; i<=4; i++)
    {
        if(a[i]%2==0)
            {
                printf("\n%d", a[i]);
            }
    }
    for(i=0; i<=4; i++)
    {
        if(a[i]%2==0)
        {
            b++;
        }
    }
    printf("\nThe number of even number:%d", b);
    return 0;
}
