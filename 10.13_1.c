#include <stdio.h>
#define LEW 5
#include <math.h>
int main()
{
 int i,b[LEW];
 float a[LEW];
 for(i=0;i<=LEW;i++)
   scanf("%f%d",&a[i],&b[i]);
 for(i=0;i<=LEW;i++)
    printf("%lf\n",pow(a[i],b[i]));
 return 0;
}
