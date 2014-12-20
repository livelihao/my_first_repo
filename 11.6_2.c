#include <stdio.h>
#include <string.h>
int main()
{
	int x,i,p=0,a[100],t=0;
	char s[100];
	gets(s);
	x = strlen (s);
	for (i=0;i<x;i++)
	{
		a[i] = s[i]-'0';
		t +=a[i];
	}
	if(t%2==0)
	{
		for(i=0;i<x;i++)
		{
			if(a[i]%2!=0) 
				{
					p=3;
					break;
				}
			else
				p=1;
		}
	}
	else
	{
		for(i=0;i<x;i++)
		{
			if(a[i]%2==0) 
				{
					p=3;
					break;
				}
			else
				p=2;
		}
	}
	if(p==1)	
		printf("Even\n");
	else if(p==2)
		printf("Odd\n");
	else if(p==3)
		printf("None\n");
	return 0;
}
