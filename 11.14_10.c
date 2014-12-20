#include <stdio.h>
#include <string.h>
int main ()
{
	int a[1001],b[1001];
	int n,n1,n2,p=0,q;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%d",&n);
	for(p=1;p<=n;p++)
	{
		if(p%2 != 0)
			n1 = 0;
		else
			n2 = 0;
		if(p%2 != 0)
			do{
				scanf("%d",&a[n1]);
				n1++;
			}while(a[n1-1]!=0);
		else
			do{
				scanf("%d",&b[n2]);
				n2++;
			}while(b[n2-1]!=0);
		if(p%2 == 0)
		{
			if(n1 >n2)
				for(int i=0;i<n1-1;i++)
				{
					if(!i)
						printf("%d",a[i]+b[i]);
					else
						printf(" %d",a[i]+b[i]);
				}
			if(n1<=n2)
				for(int i=0;i<n2-1;i++)
				{
					if(!i)
						printf("%d",a[i]+b[i]);
					else
						printf(" %d",a[i]+b[i]);
				}
			printf("\n");
			memset(a,0,sizeof(a));
			memset(b,0,sizeof(b));
		}
	}
	if(p%2 == 0)
	{
		for(int i=0;i<n1-1;i++)
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
