#include <stdio.h>
#include <string.h>
int main ()
{
	int a[1001],b[1001];
	int n,n1,p=0,q;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	while(scanf("%d",&n)!=EOF)
	{
		p++;
		if(p%2!=0) n1 = n;
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(p%2!=0) b[i] = a[i];
		}
		if(p%2 == 0)
		{
			if(n1 >n)
				for(int i=0;i<n1;i++)
				{
					if(!i)
						printf("%d",a[i]+b[i]);
					else
						printf(" %d",a[i]+b[i]);
				}
			if(n1<=n)
				for(int i=0;i<n;i++)
				{
					if(!i)
						printf("%d",a[i]+b[i]);
					else
						printf(" %d",a[i]+b[i]);
				}
			printf("\n");
			memset(a,0,sizeof(a));
			memset(b,0,sizeof(b));
			p = 0;
		}
	}
	if(p == 1)
	{
		for(int i=0;i<n;i++)
		{
			if(!i)
				printf("%d",a[i]);
			else
				printf(" %d",a[i]);
		}
		printf("\n");
	}
	return 0;
}
