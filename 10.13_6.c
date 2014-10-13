#include<stdio.h>
int main()
{
 int x,y;
 scanf("%d",&x);
 y=100-x;
 printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d",y/20,y%20/10,y%20%10/5,y%20%10%5);
 return 0;
}
