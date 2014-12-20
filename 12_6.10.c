#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isnumdot(char ch)
{
	if(ch=='.')
		return 1;
	else if(ch>='0'&&ch<='9')
		return 1;
	else
		return 0;
}

int main()
{
	char ch[110];
	int flag=1;
	while(gets(ch)!=NULL)
	{
		int len =strlen(ch);
		int n=0,k=0,p=1,num_dot=0;
		flag=1;
		for(int i=0;i<len;i++)
		{
			if(!isnumdot(ch[i]))
			{
				flag=0;
				break;
			}
			if(ch[i+1]=='.'||i==len-1)
			{
				for(int j=i;j>=k;j--)
				{
					n += (ch[j]-'0')*p;
					p *= 10;
//printf("*****%d******",n);
				}
				k=i+2;
//printf("%d\n",n);
				if(n >255)
				{
					flag=0;
					break;
				}
				n =0;
				p = 1;
			}
			if(ch[i]=='.'&&ch[i-1]!='.')
				num_dot++;
             
        }
        if(num_dot!=3)
            flag=0;
        if(ch[len-1]=='.')
            flag=0;
        if(ch[0]=='.')
            flag =0;
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
