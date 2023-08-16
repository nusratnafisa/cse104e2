#include<stdio.h>


    int getmax(int a ,int b)
    {
         if (a>b)
         {
            return a;
         }
         else
         {
             return  b;
         }

    }

    int main()
    {
        int c,d;
        scanf("%d %d",&c,&d);
        int max=getmax(c,d);
        printf("max =%d",max);
    }

