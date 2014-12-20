#include <stdio.h>
int main()
{
	int y;
	while(scanf("%d",&y)!=EOF)
	while(1)
	{
		y++;
		int z = y;
		int a,b,c,d;
		a = z/1000;
		b = z%1000/100;
		c = z%100/10;
		d = z%10; 
		if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
		{
			printf("%d\n",z);
			break;
		}
	}
	return 0;
}
