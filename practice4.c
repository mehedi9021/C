#include<stdio.h>
int main()
{

    int n,p,q,r,s,t,u;
    printf("Enter value :");
    scanf("%d", &n);
    p=n/1000;
    printf("First value is : %d\n", p);
    q=n%1000;
    r=q/100;
    printf("Secound Value is : %d\n", r);
    s=q%100;
    t=s/10;
    printf("Third value is : %d\n",t);
    u=s%10;
    printf("Fourth value is : %d",u);
    return 0;
}
