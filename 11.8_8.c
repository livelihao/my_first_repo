#include <stdio.h>
int main ()
{
	int n,i,j;
	int a[10010];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(scanf("%d",&j)!=EOF)
	{
		if(j>n)
		{
			printf("OUT OF RANGE\n");
			continue;
		}
		printf("%d\n",a[j-1]);
	}
	return 0;
}
