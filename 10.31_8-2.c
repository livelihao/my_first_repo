#include <stdio.h>
#include <string.h> 
int main()
{
  int n;
  char ch[1010];
  scanf("%d",&n);
  getchar();
  for(int i =1;i<=n;i++)
  {
  	gets(ch);
  	printf("case %d:length=%d.\n",i,strlen(ch));
  }
}
