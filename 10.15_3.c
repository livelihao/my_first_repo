#include <stdio.h>
int main()
{
 int a,b,N,i;
 scanf("%d",&N);
 for(i=1;i<=N;i++)
  {
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
  }
 return 0;
}
