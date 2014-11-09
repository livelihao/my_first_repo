#include <stdio.h>
int main ()
{
	int n,i,j,x,p=1;
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
				printf("%d\n",j+1);
				break;
			}
			else
				p++;
		}
		if(p-1==n) printf("NOT FOUND\n");
		p=1;
	}
	return 0;
}

