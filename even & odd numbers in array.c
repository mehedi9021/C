#include<stdio.h>
int main()
{
    int a[5];
    int i;
    for (i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\nEven Numbers:\n");
    for(i=0; i<=4; i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n", a[i]);
        }
    }
    printf("\n\nOdd Numbers:\n");
    for(i=0; i<=4; i++)
    {
        if(a[i]%2==1)
        {
            printf("%d\n", a[i]);
        }
    }
return 0;
}
