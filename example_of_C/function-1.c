/*
* =============================================
*
* ~ 計 算 地 球 內 部 溫 度 之 程 式 ~
*
* =============================================
*/

#include <stdio.h>

double celsius_at_depth(double depth)
{
    return(10*depth+20);
}


double fahrenheit (double celsius)
{
    return(1.8*celsius+32);
}
int main(void)
{
    double a,b,c ;
    printf("++++++此為計算地球內部溫度之程式++++++\n\n");
    printf("請輸入地底深度(公里)>>");
    scanf("%lf",&a);
    b=celsius_at_depth(a);
    c=fahrenheit(b);
    printf("\n地底深度%.2f公里時,攝氏約%.2f度,華氏約%.2f度。\n\n\n",a,b,c);
    return(0);
}