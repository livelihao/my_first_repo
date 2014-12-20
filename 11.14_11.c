#include <stdio.h>
#include <string.h>
int main ()
{
	int a[1001],b[1001];
	int n,n1,n2,p=0,q,j,max;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%d",&q);
	for ( j=1;j<=q;j++)
	{
		scanf("%d",&n);
		max = n;
		if(j%2 != 0)
		{
			memset(a,0,sizeof(a));
			n1 = n;
			for(int i=0;i<n;i++)
				scanf("%d",&a[i]);
		}
		else
		{
			n2 = n;
			memset(b,0,sizeof(b));
			for(int i=0;i<n;i++)
				scanf("%d",&b[i]);
		}
		if(j != 1)
		{
			max = n2>n1? n2:n1 ;
			for(int i=0;i<max;i++)
			{
				if(!i)
					printf("%d",a[i]+b[i]);
				else
					printf(" %d",a[i]+b[i]);
			}
			printf("\n");
		}
	}
	if(q%2 != 0)
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
	else
	{
		for(int i=0;i<n;i++)
		{
			if(!i)
				printf("%d",b[i]);
			else
				printf(" %d",b[i]);
		}
		printf("\n");
	}
	return 0;
}

