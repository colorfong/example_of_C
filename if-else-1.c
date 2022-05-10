//判定是否為二的倍數

#include <stdio.h>

int
main (void)
{
int a ;
printf("請輸入一個正整數>");
scanf("%d",&a);
if (a%2==0)
printf("%d是2的倍數",a);
else printf("%d不是2的倍數",a);
return(0);
}