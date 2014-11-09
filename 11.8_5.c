#include <stdio.h>
int main()
{
	int n,i,j,k=1;
	scanf("%d",&n);
	while(n!=0)
	{
		if(k!=1) printf("\n");
		for(i=1;i<=n;i++)	
		{
			if(n%2!=0)
			{
				for(j=0;j<i-1;j++)  
					printf(" ");
				for(j=0;j<2*(n-i)+1;j++)  
					printf("+");
			}
			else
			{
				for(j=0;j<n-i;j++)  
					printf(" ");
				for(j=0;j<2*(i-1)+1;j++)  
					printf("+");
			}
			printf("\n");
		}
		k++;
		scanf("%d",&n);
	}
	return 0;
}
