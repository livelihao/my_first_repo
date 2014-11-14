#include <stdio.h>
#include <string.h>
int main ()
{
	int a[101];
	int n,max=0,i;
	memset(a,0,sizeof(a));
	while(scanf("%d",&n)!=EOF)
	{
		if(n>=0&&n<=100)
			a[n]++;
	}
	for (i=0;i<=100;i++)
	{
		if(a[i]>=max)
			max = a[i];
	}
	for (i=0;i<=100;i++)
	{
		if(max == a[i])
			printf("%d\n",i);
	}
	return 0;
}
