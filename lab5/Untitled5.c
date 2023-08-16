#include<stdio.h>
void showmultiplication( int n)
{
  int i,j,s;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
     printf("multiplication table for :%d\n",i);
     for(j=0;j<=n;j++)
     {
      s=i*j;
      printf("%d x %d = %d\n",i,j,s);
     }
     printf("\n");
  }

}
int main()
{
   int n;
   showmultiplication(n);
}

