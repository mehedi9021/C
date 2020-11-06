#include<stdio.h>
void func(int a, int *b)
{
    a++;
    *b++;
    printf("%d %d\n", a, *b);
}
int main()
{
    int a=5;
    int b=10;
    func(a,&b);
    printf("%d %d\n", a, b);
}
