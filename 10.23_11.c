#include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 while (n!=0)
 {
   int x[n],i,sum = 0;
   for(i=0;i<n;i++)
   {
     scanf("%d",&x[i]);
     sum += x[i];
   }
   printf("%d\n",sum);
   scanf("%d",&n);
 }
 return 0;
}
