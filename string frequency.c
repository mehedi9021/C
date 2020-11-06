#include<stdio.h>
int main()
{
    char s[1000], ch;
    int i, b=0;
    printf("Enter a string:");
    gets(s);
    printf("Enter a chracter of frequency:");
    scanf("%c", &ch);
    printf("position:");
    for(i=0; s[i]!='\0'; i++)
    {

        if(ch==s[i])
        {
            printf("%d ", i+1);

            b++;
        }

    }
    printf("\nfrequency of %c=%d\n", ch, b);


    return 0;
}
