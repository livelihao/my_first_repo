#include <stdio.h>
int main()
{
 int n,m,j;
 scanf("%d",&m);
 for (j=1;j<=m;j++)
 {
   scanf("%d",&n);
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

