#include<stdio.h>
int main()
{
    char s[500];
    int l=0, i;
    printf("Enter a string:");
    gets(s);
    l=strlen(s);
    printf("%d", l);
    return 0;

}
