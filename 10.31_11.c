#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n],i,t=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]>0)
      t ++;
  }
  printf("%d",t);
  return 0;
}
