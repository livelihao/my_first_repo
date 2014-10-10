#include <stdio.h>
int main()
{
 int a=12,b;
 printf("please press a num:\t"); 
 scanf("%d",&b);
 a+=b;
 if(a>b)
   printf("kill you !try again?\n");
 else
   printf("i will back.");
 char c,y;
 printf("y/n?");
 fflush(stdin);//清空输入缓存
 scanf("%c",&c);
 if (c=='y')
  {



      printf("please press a num again :\t");

      scanf("%d",&b);

       a+=b;


      if (a>b)

          printf("kill\tyou\tforever!\n你是我的奴隶！！！\n哈哈哈哈哈\n");

      else

        printf("why\tam\ti\tdead?\tI\twill\tback!!");

   }
else

       printf("你是我的奴隶！！！");

}
