//switch 練習 (字母)
#include <stdio.h>
int
main (void)
{
char a ;
printf("請輸入一個英文字母");
scanf("%c",&a);
switch (a)
{
case 'a':
printf("你輸入的是%c",a);
break;
case 'b':
printf("你輸入的是%c",a);
break;
default :
printf("你輸入的不是要求");
}
return(0);
}