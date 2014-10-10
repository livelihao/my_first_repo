#include <stdio.h>
int void ()
{
  int n,sum=0;
  int quotient[3];
  int remainder[2];
  for(n=100;n<1000;n++)
  {
    quotient[2]=n/100;
    remainder[1]=n%100;
    quotient[1]=remainder[1]/10;
    remainder[0]=remainder[1]/10;
    quotient[0]=remainder[0];
    sum=quotient[2]*quotient[2]*quotient[2]+quotient[1]*quotient[1]*quotient[1]+quotient[0]*quotient[0]*quotient[0];
      if(sum==n)
        printf("%d",n);
   }
   return 0;
}
    
