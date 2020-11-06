
#include<stdio.h>
int main()
{
    char s[500];
    int i, l=0;
    printf("Enter a string ::");
    gets(s);
    l=strlen(s);
    printf("Length:%d\n", l);
    printf("Reverse is:");
    for(i=l-1; i>=0; i--)
    {
        printf("%c", s[i]);
    }
    return 0;
}
