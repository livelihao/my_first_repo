#include <stdio.h>
#include <string.h>
int main ()
{
	int n,x,m=0;
	int a[200001];
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&x);
		a[x]++;
	}
	for (int i=0;i<=200000;i++)
	{
		if(m<=a[i])
			m = a[i];
	}
	printf("%d",m);
	return 0;
}
