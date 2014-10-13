#include<stdio.h>
int main()
{
 int m,n,x;
 float sum;
 scanf("%d%d%d",&m,&n,&x);
 sum=(float)m*x;
 if(sum>=n)
   printf("%.2f",sum*0.88);
 else
   printf("%.2f\n",sum);
 return 0;
}
