#include <stdio.h>
#define N 100
int main()
{
  int a[N][N],b[N][N],k,x,m,n,i,j;
  scanf("%d",&k);
  for(x=1;x<=k;x++)
  {
      scanf("%d%d",&m,&n);
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
             scanf("%d",&a[i][j]);
             b[i][j]=a[i][j];
          }
      }
  }
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               printf("%d",b[i][j]);
            printf("\n");
           }
       }
        return 0;
}
