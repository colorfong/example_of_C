//猜數字 幾A幾B

/*================= 猜數字遊戲 =====================
*
*
*
*=================================================*/

#include<stdio.h>
int
main(void)
{
int one,two,three,four ;
int a,b,c,d ;
int na , nb ;
int loop10 ;
int initial ;
one=4 ;
two=0 ;
three=9 ;
four=6 ;
printf("=====>猜數字遊戲,限制10次,加油!<=====\n\n\n");
printf("1.請輸入4個數字---(數字勿重複)--->");
scanf("%d",&initial);
for (loop10=1 ; loop10<=9 ; loop10++)
{
na=0 ;
nb=0 ;
d=initial%10 ;
initial=initial/10 ;
c=initial%10 ;
initial=initial/10 ;
b=initial%10 ;
initial=initial/10 ;
a=initial%10 ;
if (a==one)
na++;
else if(a==two)
nb++;
else if(a==three)
nb++;
else if(a==four)
nb++;


if (b==one)
nb++;
else if(b==two)
na++;
else if(b==three)
nb++;
else if(b==four)
nb++;


if (c==one)
nb++;
else if(c==two)
nb++;
else if(c==three)
na++;
else if(c==four)
nb++;


if (d==one)
nb++;
else if(d==two)
nb++;
else if(d==three)
nb++;
else if(d==four)
na++;

if(na==4)
{
printf("\n\n妳答對了,恭喜!!!");
loop10=999;
}

else if(na<4)
{
printf("%dA%dB=======>%d.請再輸入一次>",na,nb,loop10+1);
scanf("%d",&initial);
}

}

if(na<4)
printf("\n\n\nYOU LOSE-再加油吧-GAME OVER!!!");

return(0);
}