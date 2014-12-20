#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 110
char * str_rev(char des[110],char source[110])
{
    char *r=des;
    char temp;
    int len = strlen(source);
    int j = len;
    for(int i=0;i<len/2;i++)
    {
	    temp = source[i];
	    source[i] = source[len-1 - i]; 
	    source[len-1 -i] = temp;
    }
    strcpy(des,source);
    return r;
 
}

int main()
{
	char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
	gets(s);
	p = str_rev(str, s);
	puts(p);
	puts(str);
	return 0;
}
