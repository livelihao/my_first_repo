int divisor (int a,int b) 
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
int multiple (int a,int b) 
{ 
  int divisor (int a,int b); 
int temp; 
  temp=divisor(a,b);  

 return  (a*b/temp);
}
#include <stdio.h>  
int main()  
 { 
 int m,n,t1,t2;    
while(scanf("%d%d",&m,&n)!=EOF)
{          
 t1=divisor(m,n);          
t2=multiple(m,n);               
printf("%d ",t1);  printf("%d\n", t2);  
}
return 0;
}
