#include <stdio.h>
int main ()
{
	int n,a,b,c;
	scanf("%d",&n);
	while(n!=0)
	{
		c = (n-1)%60;
		b = (n-1)%3600/60;
		a = (n-1)/3600;
		printf("%.2d:%.2d:%.2d\n",a,b,c);
		scanf("%d",&n);
	}
	return 0;
}
