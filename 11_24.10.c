#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
	int ra,ca;
	double a[55][15]={0};
	char sub[10],name[10];
	double sum=0;
	scanf("%d%d",&ra,&ca);
	for(int i=0;i<=ca;i++)
	{
		memset(sub,0,sizeof(sub));
		scanf("%s",sub);
		if(i)
			printf("%5s  ",sub);
		else
			printf("name      ");
	}
	printf("  sum\n");
	for(int j=0;j<ra;j++)
	{
		sum = 0;
		memset(name,0,sizeof(name));
		scanf("%s",name);
		for(int i=0;i<ca;i++)
		{
			scanf("%lf",&a[j][i]);
			sum +=a[j][i];
		}
		printf("%-8s  ",name);
		for(int i = 0; i < ca; i++)  
			printf("%5.1lf  ",a[j][i]);  
		printf("%5.1lf\n",sum); 
	}
	printf("average   ");
	for(int i=0;i<ca;i++)
	{
		sum =0;
		for(int j=0;j<ra;j++)
			sum += a[j][i];
if(!i)
		printf("%5.1lf",(double)sum/ra);
else
		printf("  %5.1lf",(double)sum/ra);
	}
	printf("\n");
	return 0;
}
