#include <stdio.h>
int main()
{
  int k,m,n,i,j=0;
  scanf("%d%d%d",&k,&m,&n);
  for(i=1;i<=k;i++)
  {
    if(j==0)
    { if((i%m==0&&i%n!=0)||(i%m!=0&&i%n==0))
      {  printf("%d",i);j++;}
    }
    else
    { if((i%m==0&&i%n!=0)||(i%m!=0&&i%n==0))
       { printf(" %d",i);j++;}
    } 
  }
  return 0;
}
