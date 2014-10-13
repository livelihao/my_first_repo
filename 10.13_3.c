#include <stdio.h>
int main()
{
 int n;
 float f;
 scanf("%d%f",&n,&f);
 n>0?printf("%d\n",n):printf("%d\n",(-1)*n);
 f>0?printf("%g\n",f):printf("%g\n",(-1)*f);
 return 0;
}
