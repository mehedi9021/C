void calculate(int a, int b);
int main()
{
    int a=10, b=20;
    calculate(a, b);
    return 0;
}
void calculate(int a, int b)
{
    int add, sub;
    add=a+b;
    sub=a-b;
    printf("%d", add);
    printf("%d", sub);
}
