#include<stdio.h>
int main()
{
  int i,n,a,b,c;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   scanf ("%d%d%d",&a,&b,&c);
   if((a+b > c)&&(b+c >a)&&(a+c > b))
     printf("YES\n");
   else
     printf("NO\n");
  }
  return 0;
}
