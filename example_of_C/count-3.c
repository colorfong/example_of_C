//依座號輸入成績

#include<stdio.h>

int
main(void)

{
int x,y,z ;
for (x=1 , z=0 ; x<=5 ; ++x )
{
printf("請輸入%d號成績",x);
scanf("%d",&y);
z+=y ; /*累計符號*/
}
printf("總合為%d",z);
return(0);
}
