#include<stdio.h>
int main()
{
    int n, p,q,r,s;
    printf("Enter value :");
    scanf("%d", &n);
    p=n/100;
    printf("First value is : %d\n", p);
    q=n%100;
    r=q/10;
    printf("Secound value is :%d\n", r);
    s=q%10;
    printf("Third Value is : %d", s);
    return 0;
}
