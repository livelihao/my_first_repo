#include <stdio.h>
#include <string.h>
int main()
{
	int n,temp,i=0;
	int a[20];
	while(scanf("%d",&n)!=EOF)
	{
		do{
			temp = n%2;
			n = n/2;
			a[i++]=temp;
		}while(n!=0);
		while(i>0)
			printf("%d",a[--i]);
		printf("\n");
	}  
	return 0;
}

