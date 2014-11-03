#include <stdio.h>
int main()
{
   int a,b,c,d,m,n,x,y,z;
   int t=1,p=0,q=1; 
   scanf("COCK,HEN,CHICK,MONEY,CHICKS");
   while(scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n)!=EOF)
   {
	   if(t!=1) printf("\n");
	   for(x=0;x<=m/a;x++)
		   for(y=0;y<=(m-(a*x))/b;y++)
		   {
			   z=n-x-y;
			   if(a*x+b*y+c*z/d==m && z*c%d==0)
			   {
				   if(q!=1)
					   {printf("%d,%d,%d\n",x,y,z); q++;}
				   else
				   {
					   printf("COCKS,HENS,CHICKS\n");
					   printf("%d,%d,%d\n",x,y,z);
					   q++;
				   }
				   p++;
			   }
		   }
	   if(p==0)
		   printf("Cannot buy!\n");
	   q=1; p=0; t++;
   }
   return 0;
}
