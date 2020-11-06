#include<stdio.h>

int main()
{
    float i, p, q, r, Average;
    printf("Enter English Number:");
    scanf("%f", &i);
    printf("Enter Math Number:");
    scanf("%f", &p);
    printf("Enter CSE Number:");
    scanf("%f", &q);
    printf("Enter Physics Number:");
    scanf("%f", &r);
    Average= (i+p+q+r)/4;
    printf("Average is:(%f+%f+%f+%f)/4 = %f",i,p,q,r,Average);
    return 0;
}
