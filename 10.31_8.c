#include <stdio.h>
#include <string.h>
int main()
{
  int n,j=0;
  char ch1;
  scanf("%d",&n);
  scanf("%c",&ch1);
  for (int i=1;i<=n;i++)
  {
     char ch[1000];
     do{
     scanf("%c",&ch[j]);
     j++;
     }while(ch[j-1]!='\n');
     printf("case %d:length=%d.\n",i,j-1);
     j=0;
  }
  return 0;
}
