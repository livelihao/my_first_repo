#include<stdio.h>
int main()
{
 int a,b,c,max,min;
 scanf("%d%d%d",&a,&b,&c);
 if(a>=b)
 {
  max=a;
  min=b;
 }
 else
 {
  max=b;
  min=a;
 }
 if(c>=max)
   printf("%d %d %d",min,max,c);
 else if(c<=min)
   printf("%d %d %d",c,min,max);
 else
   printf("%d %d %d",min,c,max);
 return 0;
}
