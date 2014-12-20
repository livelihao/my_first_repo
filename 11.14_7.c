#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
	char c[101],ch[101];
	int l,k=0,p;
	do {
		memset(ch,0,sizeof(ch));
		gets(c);
		l = strlen (c);
		p = l-1;
		int j=0;
		for (int i =0;i<l;i++)
			if(isspace(c[i]))
				k++;
			else 
				break;
		for (int i =l-1;i>=0;i--)
			if(isspace(c[i]))
				p--;	
			else 
				break;
		for(int i = k;i<=p;i++)
		{
			ch[j] = c[i];
			printf("%c",ch[j]);	
			j++;
		}
		printf("\n");
		k = 0;
	}while(strcmp(ch,"END"));
	return 0;
}
