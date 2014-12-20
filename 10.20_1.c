//换酒瓶问题：
#include <stdio.h>
int main()
{
 int a,b,c[1000],d[1000];
 int sum,i=0;
 scanf("%d%d",&a,&b);
 c[0] = a/b;
 d[0] = a%b;
 sum = a;
 do{
  sum = sum+c[i];
  d[i+1] = (c[i]+d[i])%b;
  c[i+1] = (c[i]+d[i])/b;
 i++;
 }while(c[i+1]!=0);
 printf("%d\n",sum);
 return 0;
}
