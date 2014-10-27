#include <stdio.h>
int main()
{
 int n;
 while(scanf("%d",&n)!=EOF)
 {
   int x[n],i,sum = 0;
   for(i=0;i<n;i++)
   {
     scanf("%d",&x[i]);
     sum += x[i];
   }
   printf("%d\n",sum);
 }
 return 0;
}
