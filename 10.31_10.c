#include <stdio.h>
#include <string.h>
int main()
{
  int sum[46],i,n;
  scanf("%d",&n);
  int a[n],j;
  for(j=0;j<n;j++) scanf("%d",&a[j]);
  memset(sum,0,sizeof(sum));
  for(i=0;i<46;i++)
  {
     if(i==0||i==1)
 	sum[i]=1;
     else
	sum[i] =sum[i-1]+sum[i-2];
  }
  for(j=0;j<n;j++)
  printf("%d\n",sum[a[j]]);
  return 0;
}
