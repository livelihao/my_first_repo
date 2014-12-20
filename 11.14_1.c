#include <stdio.h>
int is_leap_year(int n)
{
	if((n%4==0&&n%100!=0)||n%400==0)
		return 1;
	else
		return 0;
}
int is_ok(int x,int y,int z)
{
	switch(y)
	{
		case 1:if(z<=31&&z>=1) return 1;
			       else return 0;
		case 2:if(z<=28+is_leap_year(x)&&z>=1) return 1;
			       else return 0;
		case 3:if(z<=31&&z>=1) return 1;
			       else return 0;
		case 4:if(z<=30&&z>=1) return 1;
			       else return 0;
		case 5:if(z<=31&&z>=1) return 1;
			       else return 0;
		case 6:if(z<=30&&z>=1) return 1;
			       else return 0;
		case 7:if(z<=31&&z>=1) return 1;
			       else return 0;
		case 8:if(z<=31&&z>=1) return 1;
			       else return 0;
		case 9:if(z<=30&&z>=1) return 1;
			       else return 0;
		case 10:if(z<=31&&z>=1) return 1;
				else return 0;
		case 11:if(z<=30&&z>=1) return 1;
				else return 0;
		case 12:if(z<=31&&z>=1) return 1;
				else return 0;
		default: return 0;
	}
}
void print_date(int x,int y,int z)
{
	if(!is_ok(x,y,z)) 
		printf("error date!\n");
	else
		switch(y)
		{
			case 1: printf("%d\n",z);break;
			case 2: printf("%d\n",31+z);break;
			case 3: printf("%d\n",31+28+is_leap_year(x)+z);break;
			case 4: printf("%d\n",31*2+28+is_leap_year(x)+z);break;
			case 5: printf("%d\n",31*2+30+28+is_leap_year(x)+z);break;
			case 6: printf("%d\n",31*3+30+28+is_leap_year(x)+z);break;
			case 7: printf("%d\n",31*3+30*2+28+is_leap_year(x)+z);break;
			case 8: printf("%d\n",31*4+30*2+28+is_leap_year(x)+z);break;
			case 9: printf("%d\n",31*5+30*2+28+is_leap_year(x)+z);break;
			case 10: printf("%d\n",31*5+30*3+28+is_leap_year(x)+z);break;
			case 11: printf("%d\n",31*6+30*3+28+is_leap_year(x)+z);break;
			case 12: printf("%d\n",31*6+30*4+28+is_leap_year(x)+z);break;
		}
}
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d-%d-%d",&a,&b,&c);
		print_date(a,b,c);
	}
	return 0;
}
