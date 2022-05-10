//成績總合計算


#include<stdio.h>
int
main(void)
{
int sum;
int x,y ;
printf("若要結束,請輸入-1");
for (sum=0 , x=1 ; x!=-1 ; x++ )
{
printf("請輸入%d號的成績",x);
scanf("%d",&y);
sum+=y ;
}
printf("總成績為%d",sum);
return(0);
}