#include <stdio.h>
int main()
{
 float x,sum=0;
 int i=1;
 scanf("%f",&x);
 do{
  i=i+1;
  sum=1/i+sum;
 }while(x>sum);
 printf("%d card(s)",i);
 return 0;
}
