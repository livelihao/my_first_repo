#include <stdio.h>
#include <string.h>
int main()
{
	char c1[20],c2[20];
	int a=0,b=0,s=0;
	while (scanf("%s%s",c1,c2)!=EOF)
	{
		int l1 = strlen (c1);
		int l2 = strlen (c2);
		int l =l1>l2?l1:l2; 
		for(int i=l-1;i>=0;i--)
		{
			a += c1[i]-'0';
			a += c2[i]-'0';
			if(a+b>9)
			{
				a = 0;
				b = 1;
				s++;
			}
			else 
			{
				a = 0;b = 0;
			}
		}
		printf("%d\n",s);
		s = 0;
	}
	return 0;
}
