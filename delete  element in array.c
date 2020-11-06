 #include<stdio.h>
 int main()
 {
     int i,n, p;
     printf("Enter the size of array:");
     scanf("%d", &n);
     int a[n];
     for(i=0; i<=n-1; i++)
     {
         scanf("%d", &a[i]);
     }
     printf("Enter the position for delete:");
     scanf("%d", &p);
     for(i=0; i<=n-1; i++)
     {
         if(i==p)
         {
             break;
         }
     }
     for(i=p; i<=n-1; i++)
     {
         printf("%d\n", a[i]);
     }

     return 0;
 }
