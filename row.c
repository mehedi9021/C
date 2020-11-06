#include<stdio.h>
int main()
{
    int n, i, sum=0, avrg;
    printf("Enter elements:");
    scanf("%d", &n);
    int a[100];
    for(i=1; i<=n; i++)
    {
        scanf("\n%d", &a[n]);
        sum=sum+a[n];
        //avrg=sum/n;
    }
    avrg=sum/n;
    printf("\n%0.2f",(float)sum/n);
    return 0;
}
