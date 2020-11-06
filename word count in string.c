#include<stdio.h>
int main()
{
    char s[500];
    int i, l, b=1;
    printf("Enter a string ::");
    gets(s);
    l=strlen(s);
    printf("%d\n", l);
    for(i=0;i<=l-1; i++)
    {
        if(s[i]==' ')
        {
            b++;
        }
    }
    printf("%d", b);
    return 0;
}
