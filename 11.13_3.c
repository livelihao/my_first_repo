#include <stdio.h>
int main ()
{
	int a,t1=0,t2=0;
	double p1,p2,s1=0,s2=0;
	while(scanf("%d",&a)!=EOF)
	{
		if(a==0) 
			break;
		else if(a>0) 
		{
			t1++;
			s1 +=a;
		}
		else 
		{
			t2++;
			s2 +=a;
		}
	}
	if(t2==0) 
		printf("0\n");
	else
	{
		p2 = s2/t2;
		printf("%d %.2f\n",t2,p2);
	}
	if(t1==0) 
		printf("0\n");
	else
	{
		p1 = s1/t1;
		printf("%d %.2f\n",t1,p1);
	}
	return 0;
}
