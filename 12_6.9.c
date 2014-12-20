#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ()
{
	char ch[1010];
	while (gets(ch)!=NULL)
	{
		int num=0,len=0;
		len =strlen(ch);
		for(int i=0;i<len;i++)
			if(isalpha(ch[i])==0&&isalpha(ch[i-1])!=0)	
				num++;
		if(isalpha(ch[len-1])!=0)
			num++;
		printf("%d\n",num);
	}
	return 0;
}
