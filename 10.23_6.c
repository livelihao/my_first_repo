#include<stdio.h>
int main()
{
 int M,j,sum=0,k=0;
 while(scanf("%d",&M) != EOF)
 {
   for(j=100;j<=999;j++)
   {
     if((j%M == 0)&&((j/100)!=(j%100/10))&&((j%100/10)!=(j%10))&&((j/100)!=(j%10)))
        sum += j;
   }
   k++;
   printf("case %d:%d\n",k,sum);
   sum = 0;
 }
 return 0;
}

