#include<stdio.h>
int main()
{
	int m=0,n,i=0;
	while(scanf("%d",&n)!=EOF)
	{
		if(n>m&&n!=m)
		{
			m=n;
			i=0;
		}
		if(n==m)
			i++;
	}
	printf("maximum data is %d, whose occurences is %d.\n",m,i);
	return 0;
}
