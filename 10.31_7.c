#include<stdio.h>
#include<string.h>
int main()
{
	char ch[110];
	int i,j;
	gets(ch);
	i = strlen (ch);
	for(j=i-1;j>=0;j--)
	{
		printf("%c",ch[j]);
	}
	return 0;
}
