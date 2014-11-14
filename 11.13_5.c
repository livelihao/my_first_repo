#include <stdio.h>
int main()
{
	int a,b,c,n;
	while(scanf("%d:%d:%d",&a,&b,&c)!=EOF)
	{
		n = c+b*60+a*3600+1;
		printf("%d\n",n);
	}
	return 0;	
}
