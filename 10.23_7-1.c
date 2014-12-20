#include <stdio.h> 
int main()  
{     
	int k,i=1,a,b;  
	unsigned s=0;    
	scanf("%d",&k);         
	for(a=1;a<=k;a++)           
	{        
		for(b=1;b<=a-1;b++)      
			i=i*b;             
		{                       
			if((i*b/i)!=b)      
			{
				printf("overflow");   
			}         
		}       
		i=i*a;     
		s=s+i;     
		i=1;
	}        
     
	if((i*b/i)==b)      
		printf("%u",s);        
  return 0; 
}
