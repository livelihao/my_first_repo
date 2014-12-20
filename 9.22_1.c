#include <stdio.h>
int main()
{
  int dividend,divisor,quotient,remainer,greatestGommonDivisor;

  printf("请输入被除数和除数：\n");

  scanf("%d%d",&dividend,&divisor);

  if(dividend>=divisor&&divisor>0)

{

    remainer=dividend%divisor;

   while(remainer!=0)

   {

       dividend=divisor;

       divisor=remainer;

       remainer=dividend%divisor;

    }//while循环结束

    greatestGommonDivisor=divisor;

    printf("最大公约数为:%d",greatestGommonDivisor);
}
  else
 printf("您输入的数据不合法，要求为两个正整数！");

 return 0;
}


