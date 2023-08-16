#include<stdio.h>
int main()
{
    int i,j,n,s;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Multiplication table for %d\n",i);
        for(j=1;j<=n;j++)
        {
            s=i*j;
            printf("%d x %d = %d\n",i,j,s);
        }

    }
    return 0;
}
