#include <stdio.h>
int m[1000001]= {'\0'};
int main ()
{
	long int m1,m2,j,k,n,t=1,b,max;
	while(scanf("%ld %ld",&j,&k)!=EOF)
	{
		max = 0;
		if(j<k)
		{
			m2 = k;
			m1 = j;
		}
		else 
		{
			m2 = j;
			m1 = k;
		}
		for(b = m1;b<=m2;b++)
		{
			t = 1;
			n = b;
			if (m[b]!='\0')    
				goto loop; 
			while (n!=1)       
			{   
				t++;  
				if (n % 2 == 0)   
					n /= 2;    
				else  
					n = 3 * n + 1; 
			}  
			m[b] = t;
loop:  
			if (m[b] > max)            
				max = m[b];
		}
		printf("%ld %ld %ld\n",j,k,max);
	}
	return 0;
}
