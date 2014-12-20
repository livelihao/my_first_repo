#include <stdio.h>
#include <string.h>
int main ()
{
	char c[1001],c_max[1001],c_min[1001];
	memset(c,0,sizeof(c));
	memset(c_max,0,sizeof(c_max));
	memset(c_min,0,sizeof(c_min));
	int j=0,l,k=0,p=0,max=0,min=0;
	while(scanf("%s",c)!=EOF)
	{
		l = strlen (c);	
		for (int i=0;i<l-1;i++)
			if(c[i]=='0')
				k++;
			else 
				break;
		if(!p)
		{
			for(int i=k;i<l;i++)
			{
				c_min[j]=c_max[j] = c[i];
				j++;
			}
			j=0;
			max = min = l-k;
		}
		if(l-k>max)
		{
			max = l-k;
			for(int i=k;i<l;i++)
			{
				c_max[j] = c[i];
				j++;
			}
			j=0;
		}
		else if(l-j == max)
		{
			if(strcmp(c,c_max)>0)
				for(int i=k;i<l;i++)
				{
					c_max[j] = c[i];
					j++;
				}
			j=0;
		}
		if(l-k<min)
		{
			min = l-k;
			for(int i=k;i<l;i++)
			{
				c_min[j] = c[i];
				j++;
			}
			j=0;
		}
		else if(l-j == min)
		{
			if(strcmp(c,c_min)<0)
				for(int i=k;i<l;i++)
				{
					c_min[j] = c[i];
					j++;
				}
			j=0;
		}
		k=0;p++;
	}
	printf("The maximum value is : ");
	for (int i=0;i<max;i++)
		printf("%c",c_max[i]);
	printf("\n");
	printf("The minimum value is : ");
	for (int i=0;i<min;i++)
		printf("%c",c_min[i]);
	printf("\n");
	return 0;
}
