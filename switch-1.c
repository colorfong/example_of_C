//switch 練習 (整數)
#include <stdio.h>
int main(void)
{
int a;                                           //宣告整數
printf("請輸入一個數字>");      //使用者輸入
scanf("%d",&a);                         //掃入變數a
switch (a)                                    //看a為何數，對應的case將被執行
{                          
case 1:                                         //a=1的情況執行下述
a=4*a ;
printf("你輸入的數字是%d",a);
break ;
case 2:                                         //a=2的情況執行下述
printf("你輸入的數字是%d",a);
break;
default:                                         //a等於其他數的情況執行下述
printf("你輸入一個無效數字");
}
return(0) ;                                     //結束整個程式
}