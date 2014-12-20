#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
 
#define MAX_STR_LEN 15

int strToInt(char str[15])
{
    int len = strlen(str);
    int i = 0,sum = 0;
  
   if(str[0] == '+'||str[0] == '-')
     i=1;
   while (1) 
    {
	    if(i==len) break;
	    if(isdigit(str[i]))
	    {
		    sum*= 10;
		    sum += str[i] - '0';
	    }
	    else if (str[0]=='-')
		    return -sum;
	    else 
		    return sum;
	    i++;
    }
    if(str[0]=='-')
            return -sum;
    else
	    return sum;
}
 
int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}
