#include <stdio.h>
int main()
{
	int N,i,j,temp;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<N-1;j++)
		for(i=0;i<N-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	printf("%d + %d = %d\n",a[N-2],a[N-1],a[N-1]+a[N-2]);
	return 0;
}
