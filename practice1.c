#include<stdio.h>

int main()
{
    int a, b, c, D;
    printf("Enter First Number a :");
    scanf("%d", &a);
    printf("Enter Secound Number b :");
    scanf("%d", &b);
    printf("Enter Third Number c");
    scanf("%d", &c);
    D=a;
    a=c;
    c=b;
    b=D;
    printf(".........After Swapping.........\n");
    printf("a=%d b=%d c=%d",a,b,c);
    return 0;
}
