#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], s2[100];
    printf("Enter a string:");
    gets(s);
    int i, l=0, j=0;
    l=strlen(s);
    printf("%d", l);
    for(i=l-1; i>=0; i--, j++)
       {
           s2[j]=s[i];
       }

    printf("The reverse output is:");
    puts(s2);
    return 0;
}
