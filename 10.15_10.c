//素数，
#include <stdio.h>
int main()
{
 int m,n,i;
 scanf("%d%d",&m,&n);
 printf("=====\n");
 for(i=n;i>=m;i--)
  {
    switch(i)
   { 
     case 2:
     case 3:
     case 5:
     case 7:
       printf("%d\n",i);break;
     case 1:
        break;
     default:{
                if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0)
                   printf("%d\n",i);break;
              }
    }
  }  
  printf("=====\n");
  return 0;
}
