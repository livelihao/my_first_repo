#include <stdio.h>
#include <math.h>
double func(double x)
{
	if(x<0)
		return -x;
	else if(x>=0&&x<1)
		return sin(2*x);
	else if(x>=1&&x<5)
		return sqrt(x*x*x+x);
	else 
		return 2*x+10;
}
void output(int n, double y)
{
	printf("case %d:y=%g.\n",n,y);
}
int main()
{
	int i, cases;
	double x;
	scanf("%d", &cases);
	for(i = 1; i <= cases; i++)
	{
		scanf("%lf", &x);
		output(i, func(x));
	}
	return 0;
}
