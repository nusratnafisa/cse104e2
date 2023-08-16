#include<stdio.h>
float getarea( int r)
{
    float area = 3.1416*r*r;
    return area;
}
int main()
{
    int r;
    scanf("%d",&r);
    printf(" area= %f",getarea(r));
    return 0;
}

