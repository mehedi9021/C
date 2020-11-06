#include<stdio.h>
int main()
{
    int i, n, a[100];
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("\n%d", a[i]);
    }
    int sum=0;
    for(i=0; i<n; i++)
    {
        sum+=a[i];

    }

        printf("\n%d", sum);

    return 0;
}
