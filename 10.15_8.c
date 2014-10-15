#include <stdio.h>
int main()
{
  int a,b,c=1;
  while(scanf("%d%d",&a,&b)!=EOF)
   { 
  if(c==1)
    printf("%d\n",a+b);
   else
    {
     printf("\n");
     printf("%d\n",a+b);
    } 
    
   c++;  

   }
  return 0;
}
