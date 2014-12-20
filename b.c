#include <stdio.h>
int main()
{
	int a,b,c,d,m,n,x,y,z;
	int t=1,p=0,q=1; 
	scanf("COCK,HEN,CHICK,MONEY,CHICKS");
	while(scanf("%d,%d,%d/%d,%d,%d",&a,&b,&c,&d,&m,&n)!=EOF)
	{
		if(t!=1) printf("\n");
		if(a*d-c)
		{
			for(y=n;y>=0;y--)
			{
				if((d*m+(c-b*d)*y-c*n)%(a*d-c)==0)
				{
					x=(d*m+(c-b*d)*y-c*n)/(a*d-c);
					if(x<0||x>n) continue;
					z = n-y-x;
					if(z<0||z>n) continue;
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
		}
		else
		{
			y=(a*n-m)/(a-b);
			for(x=0;x<=n;x++)
			{
				z = n-x-y;
				if(a*(x+z)+b*y==m)
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
		}
		if(p==0)
			printf("Cannot buy!\n");
		q=1; p=0; t++;
	}
	return 0;
}
