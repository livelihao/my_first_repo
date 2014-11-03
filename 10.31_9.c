#include<stdio.h>
#include<string.h>
int main()
{
  char ch[100];
  int n;
  gets(ch);
  n=strlen(ch); 
  for (int i=0;i<n;i++)
  {
    if(ch[i]<=90&&ch[i]>=65)
	    printf("%c",155-ch[i]);
    else if(ch[i]<=122&&ch[i]>=97)
	    printf("%c",219-ch[i]);
    else
	    printf("%c",ch[i]);
  }
  return 0;
}
