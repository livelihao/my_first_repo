#include <stdio.h>
int main()
{
 int n,i,x,max,min;
 scanf("%d",&n);
 max=-32768;min=32768;
 for (i=1;i<=n;i++)
  {
    scanf("%d",&x);
    if(max<=x)
     max=x;
    if(min>=x)
     min=x;  
  }
  printf("The maximum number is %d.\nThe minimum number is %d.\n",max,min);
  return 0;
}
