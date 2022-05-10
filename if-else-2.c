//閏年成立規則
// 1.能被400整除的就是閏年
// 2.能被4整除但不能被100整除的是閏年!

#include<stdio.h>
int main(void)
{
int a;
printf("請輸入某西元年>");
scanf("%d",&a);
if (a%4==0 && a%100!=0)
printf("%d是閏年",a);
else if (a%400==0)
printf("西元%d是閏年",a);
else printf("西元%d不是閏年",a);
return(0);
}