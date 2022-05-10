//for練習
//此為九九乘法表

#include <stdio.h>
int main(void)
{
int x,y,z ;
for (x=1 ; x<=9 ; x++ )
{
for(y=1 ; y<=9 ; y++)
{
z=x*y ;
printf(" %3d",z);
}
printf("\n\n");
}
return(0);
