#include <stdio.h>
int  gcd (int a,int b) 
{
	int  temp;                
	if(a<b)                      
	{ temp=a;a=b;b=temp;}   
	while(b!=0)              
	{ 
		temp=a%b; 
		a=b;               
		b=temp;     
	} 
	return (a);             
} 
int lcm (int a,int b) 
{ 
	int gcd (int a,int b); 
	int temp; 
	temp=gcd(a,b);  

	return  (a*b/temp);
}
int main()
{
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF)
		printf("%d %d\n", gcd(a, b), lcm(a, b));
	return 0;
}
