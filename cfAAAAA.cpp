#include<stdio.h>
int main()
{
    int i,a,b,c;

    scanf("%d",&a);
     b= a/2;

     if(a%2==0)
     {

        printf("%d\n", a/2);
     for(i=1; i<=a/2;i++)
        printf("2 ");
     }
     else
     {
         printf("%d\n", a/2);

         for(i=1;i<=a/2;i++)
         {
             if(i !=b)
             {
                 printf("2 ");
             }
             else
                printf("3 ");
         }
     }
     printf("\n");
    return 0;
}
