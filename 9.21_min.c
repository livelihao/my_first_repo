#include <stdio.h>
 
void main()
{
  int a,b,c,d,e,f,min;
  
  printf("请输入6个整数：");
 
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

  if(a<b)
  
     min=a;
     
  else
  
     min=b;

  if(min<c)

     min=min+0;
  
  else
  
     min=c;

  if(min<d)

     min=min+0;
  
  else
  
     min=d;
 
  if(min<e)

     min=min+0;
  
  else
  
     min=e;
  
  if(min<f)

     min=min+0;
  
  else
  
     min=f;

  printf("最小值为：%d",min);
}

