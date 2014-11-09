#include <stdio.h>
int main ()
{
	int n,i,j,x,p=1,q=1;
	int a[10010];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(scanf("%d",&x)!=EOF)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]==x)
			{
				if(q==1)
				{
					printf("%d",j+1);
					q=2;
				}
				else
					printf(" %d",j+1);
			}
			else
				p++;
		}
		if(p-1==n) printf("NOT FOUND\n");
		else printf("\n");
		q=p=1;
	}
	return 0;
}
