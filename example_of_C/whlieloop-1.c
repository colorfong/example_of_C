/*===========================================
*
* 終極密碼
*
*============================================*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int
main(void)
{
int a,b,c;
int ans;
srand((unsigned)time(NULL));
b=rand()%101 ;
a=0 ;
c=100 ;
ans=999;
while(ans!=b)
{
printf("請輸入一數字>");
scanf("%d",&ans);
if(ans>a && ans<b )
a=ans ;
if(ans>b && ans <c)
c=ans;
if(ans==b)
printf("你答對了!!\n");
else
printf("介於%d和%d之間!",a,c);
}
return(0);
}