#include <stdio.h>
int main()
{
 int n,m,j,k=1;
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
   if(k == 1)
     printf("%d\n",sum);
   else 
   {
     printf("\n");
     printf("%d\n",sum);
   }
   k++;
 }
 return 0;
}
