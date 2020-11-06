#include<stdio.h>
int main()
{
    int n, D, M;
    printf("Enter Value n :");
    scanf("%d", &n);
    D=n/10;
    printf("Enter First value is :%d\n", D);
    M=n%10;
    printf("Secound Value is : %d", M);

    return 0;
}
