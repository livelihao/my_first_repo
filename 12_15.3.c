#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 11
int strToInt(char str[])
{
	int i,sum=0,t=1;
	for(i = strlen(str) - 1;i >= 0;i--)  
		if(str[i] >= '0' && str[i] <= '9')  
		{sum += (str[i] - '0')*t;t *= 10;}  
	if(str[0] == '-')  
		return -sum;  
	return sum;
}
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
