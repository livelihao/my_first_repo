#include <stdio.h>
void main()
{
  int c=0,a=1,b=1,num=1;

   do
   {

     printf("请选择转换方式：\n1 十进制转八进制或十六进制\n2 八进制转十进制或十六进制\n3 十六进制转十进制或十六进制\n");
     scanf("%d",&c);

     switch(c)
    {
       case 1:

       {
        printf("请输入一个十进制数字：\n");

        scanf("%d",&num);

        printf("转换成八进制请按1；转换成十六进制请按2\n");

        scanf("%d",&a);

        switch(a)
         {

           case 1:printf("%d的八进制为%o\n",num,num);break;

           case 2:printf("%d的十六进制为%x\n",num,num);break;

           default:printf("您的输入有误！！！\n");
          }

        }break;
       case 2:
       {
         printf("请输入一个八进制数字：\n");

         scanf("%o",&num);

         printf("转换成十进制请按1；转换成十六进制请按2\n");

         scanf("%d",&a);

         switch(a)
          {

            case 1:printf("%o的八进制为%d\n",num,num);break;

            case 2:printf("%o的十六进制为%x\n",num,num);break;

            default:printf("您的输入有误！！！\n");
          }

        }break;
        case 3:
       {
         printf("请输入一个十六进制数字：\n");

         scanf("%x",&num);

         printf("转换成八进制请按1；转换成十进制请按2\n");

         scanf("%d",&a);

         switch(a)
          {

            case 1:printf("%x的八进制为%o\n",num,num);break;

            case 2:printf("%x的十六进制为%d\n",num,num);break;

            default:printf("您的输入有误！！！\n");
          }

        }break;
         default:printf("您的输入有误！！！\n");


     }
         printf("是否继续？\n继续请按1，退出请按0\a\n");

         fflush(stdin);//清空输入缓存

         scanf("%d",&b);


  }while(b!=0);

}

