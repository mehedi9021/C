#include<stdio.h>
int main()
{
    char s[100], ch;
    int i,b=0; //l=0;
    printf("Enter a string:");
    gets(s);
    //l=strlen(s);
    //puts(strlen);
    printf("Enter a chracter :");
    scanf("%c", &ch);
    for(i=0; s[i]!='0'; i++)
    {
        if(ch==s[i])
        {
            b++;
        }
    }
    printf("%c=%d",ch, b);
    return 0;
    }
