#include<stdio.h>
float getarea( int r)
{
    float area = 3.1416*r*r;
    return area;
}
void getvolume(int r)
{
  float volume =1.33*getarea(r)*r;
  printf("volume = %.4f",volume);
}
int main()
{
    int r;
    float s;
    scanf("%d",&r);
    printf(" area= %.4f\n ",getarea(r));
    getvolume(r);
    return 0;
}
