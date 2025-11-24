#include <stdio.h>

int main()
{
        int num=5;

     int i,j,k;

   for(i=num;i>=1;i--)
   {
       for(j=1;j<=i;j++)
       {
            printf(" ");

       }
       for(k=i;k<=num;k++)
       {
           printf("%d",i);


        }
        printf("\n");
    }

      return 0;
}