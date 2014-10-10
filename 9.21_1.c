nclude <stdio.h>

void main ()

int a,b,c;

printf("请输入三角形的边长：\t");

scanf("%d%d%d",a,b,c);

int perimeter=0;

if(a>b+c&&b>a+c&&c>a+b)

 { perimeter=a+b+c;
  printf("三角形周长为：%d",perimeter);
}
else
  
 { perimeter=-1;

 printf("输入有误")；
}
}
