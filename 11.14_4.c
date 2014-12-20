#include <stdio.h>
int main ()
{
	int n,i,j;
	int a[1000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int m,t,k;
		scanf("%d",&m);
		for(j=0;j<m;j++)
			scanf("%d",&a[j]);
		for(j=0;j<m;j++)
		{
			if(!j)	
				printf("%d",a[j]);
			else
			{
				if(a[j] != a[j-1])
					printf(" %d",a[j]);
			}
		}
		printf("\n");
	}
}
