#include <stdio.h>
#include <string.h>
int main()
{
	char string1[100],string2[100];
	int i, k;
	gets(string1);
	k = strlen(string1);
	for (i=k-1;i>=0;i--)
	{
		printf("%c",string1[i]);
	}
	return 0;
}
