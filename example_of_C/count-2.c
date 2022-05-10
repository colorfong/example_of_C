/* 成績計算*/

#include<stdio.h>
int main(void)
{
int a=1 , b , c=0 ;
while (a<=5)
{
printf("請輸入%d號的成績",a);
scanf("%d",&b);
c+=b ;
a++ ;
}
printf("此%d位之成績總合為%d\n\n",a-1,c);
return(0);
}