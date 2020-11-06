#include<conio.h>
#include<stdio.h>
int main()
{
    int *ptr1, *ptr2, a, b;
    clrscr();
    printf("Enter two numbers\n");
    scanf("%d%d, &a, &b");
    printf("Given numbers are %d and %d\n", a, b);
    ptr1=&a;
    ptr2=&b;
    printf("Adress of a is %x and that of b is %x\n", ptr1, ptr2);
    printf("Sum of %d and %d is %d\n",a, b, *ptr1+*ptr2);
    getch();
    return 0;

}
