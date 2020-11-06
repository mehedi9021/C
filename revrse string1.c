#include<stdio.h>
int main()
{
    char s[100],s2[100];
    printf("Enter a string:");
    gets(s);
    printf("Output is:");
    puts(s);
    int i,l=0, j=0;
    l=strlen(s);
    printf("%d\n", l);
    for(i=l-1; i>=0; i--, j++)
    {
        s2[j]=s[i];
    }
    printf("Reverse output:");
    puts(s2);
    return 0;
}
