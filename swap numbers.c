#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Firtst Number a :\n");
    scanf("%d", &a);
    printf("Enter Secound Number b :\n");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("...........After Swapping..........\n ");
    printf("a=%d  b=%d", a,b);

    return 0;
}
