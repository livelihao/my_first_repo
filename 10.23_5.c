#include <stdio.h>
int main()
{
 int n,i,j=0;
 scanf("%d",&n);
 printf("Sun Mon Tue Wen Thu Fri Sat\n");
   switch(n)
   {
     case 1:printf("    ");j=j+1;break;
     case 2:printf("    ");printf("    ");j=j+2;break;
     case 3:printf("    ");printf("    ");printf("    ");j=j+3;break;
     case 4:printf("    ");printf("    ");printf("    ");printf("    ");j=j+4;break;
     case 5:printf("    ");printf("    ");printf("    ");printf("    ");printf("    ");j=j+5;break;
     case 6:printf("    ");printf("    ");printf("    ");printf("    ");printf("    ");printf("    ");j=j+6;break;
     case 7:printf("");break;
   }
  for (i=1;i<30;i++)
  {
   printf("%3d",i);
   j++;
   if(j%7 == 0) printf("\n");
   if(j%7 != 0) printf(" ");
  }
  printf(" 30");
 return 0;
}
