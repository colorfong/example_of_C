/* for 的圖形繪圖 */

#include<stdio.h>
int
main(void)
{
int x,y;
for (x=1 ; x<=4 ; x++ )
{
for(y=1 ; y<=4-x ; y++)
printf(" ");
for(y=1 ; y<=2*x-1 ; y++)
printf("*");
for(y=1 ; y<=4-x ; y++)
printf(" ");
printf("\n");
}
return(0);
}