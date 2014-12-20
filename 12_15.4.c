#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 110
int strToInt(char str[],int n)
{
	int an=0,i,p=1,len=strlen(str);
	switch(n)
	{
		case 2:
			{
				for(i = len - 1;i >= 0;i--)  
					if(str[i] >= '0' && str[i] <= '1')  
					{
						an += (str[i] - '0')*p;
						p *= 2;
					}  
				if(str[0] == '-')  
					return -an;  
				return an;
			}
		case 8:
			{
				for(i = len - 1;i >= 0;i--)  
					if(str[i] >= '0' && str[i] <= '7')  
					{
						an += (str[i] - '0')*p;
						p *= 8;
					}  
				if(str[0] == '-')  
					return -an;  
				return an;
			}
		case 10:
			{
				for(i = len - 1;i >= 0;i--)  
					if(str[i] >= '0' && str[i] <= '9')  
					{
						an += (str[i] - '0')*p;
						p *= 10;
					}  
				if(str[0] == '-')  
					return -an;  
				return an;

			}
		case 16:
			{
				for(i = len - 1;i >= 0;i--)  
				{
					if(str[i] >= '0' && str[i] <= '9')  
					{
						an += (str[i] - '0')*p;
						p *= 16;
					}
					if(str[i] == 'A'||str[i] =='a')
					{
						an += 10*p;
						p *= 16;
					}  
					if(str[i] == 'B'||str[i] =='b')
					{an += 11*p;
						p *= 16;
					}  
					if(str[i] == 'C'||str[i] =='c')
					{
						an += 12*p;
						p *= 16;
					}  
					if(str[i] == 'D'||str[i] =='d')
					{
						an += 13*p;
						p *= 16;
					}  
					if(str[i] == 'E'||str[i] =='e')
					{
						an += 14*p;
						p *= 16;
					}  
					if(str[i] == 'F'||str[i] =='f')
					{
						an += 15*p;
						p *= 16;
					}

				}
				if(str[0] == '-')  
					return -an;  
				return an;
			}
	}
	return 0;
}
int main()
{
    int base;
    char s[MAX_STR_LEN];
    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
        printf("%d\n", strToInt(s, base));
    return 0;
}
