#include<stdio.h>
int main()
{
    int var[]={10, 20, 30};
    int i, *ptr;

    ptr=var;
    for(i=0; i<=2; i++)
    {

        printf("Value of var[%d]=%d\n", i, *ptr);
        printf("Address of var[%d]\=%x\n", i, ptr );
        ptr++;
    }
return 0;
}
