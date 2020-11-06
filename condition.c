#include<stdio.h>
int main()
{
    int i=0;
    while(i<5)
    {
        i++;
        continue;
        printf("Do you see me?\n");
        if(i==10)
        {
            printf("Thnks for watching !");
            break;
        }
    }
    return 0;
}
