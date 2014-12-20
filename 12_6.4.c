#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_LEN 110

char * trim(char *s)
{
	char *r=s;
	char bef[110]={0},aft[110]={0};
	strcpy(bef,s);
	int len = strlen(s),j=0;
	int start=0,end=len-1;
	for(int i = 0;i<len;i++)
	{
		if(isspace(bef[i]))
			start++;
		else
			break;
	}
	for(int i=len-1;i>=0;i--)
		if(isspace(bef[i]))
			end--;
		else
			break;
	for(int i=start;i<=end;i++)	
		aft[j++] = bef[i];
	strcpy(s,aft);
	return r;
}
int main()
{
	char str[MAX_STR_LEN], *p;
	do
	{
		gets(str);
		p = trim(str);
		puts(p);
	} while(strcmp(p, "END"));
	return 0;
}
