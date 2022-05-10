

//卡片變數洗牌+發牌

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

void swap(int *a, int*b);


int
main(void)
{
int card[52];
int person[4][13];
int i,j,k;
int *pt;

char first[13][5];
char first_2[13][20];


srand((unsigned)time(NULL));

for(i=0 ; i<52 ; i++)
card[i]=i+1;



for(i=0 ; i<51 ; i++)
{
pt=&card[i];
for(j=i+1 ; j<52 ; j++)
do
k=rand()%52 ;
while(k<i);

swap(pt,&card[k]);
}


for(i=0 ; i<52 ; i++)
printf("%d\n",card[i]);

printf("\n\n");







/*=========================卡片分配==================================*/


for(i=0 ; i<13 ; i++)
for(j=0 ; j<4 ; j++)
person[j][i]=card[4*i+j];


for(j=0 ; j<4 ; j++)
{ for(i=0 ; i<13 ; i++)
printf("%3d",person[j][i]);
printf("\n");
}


printf("\n\n");

/*=========================卡片分配==================================*/


j=0;
for(i=0;i<13;i++)
{
switch(person[j][i]%4)
{
case 0:
strcpy(first[i],"黑桃");
break;

case 1:
strcpy(first[i],"紅心");
break;

case 2:
strcpy(first[i],"磚塊");
break;

case 3:
strcpy(first[i],"梅花");
break;

}


switch(person[j][i]%13)
{
case 0:
strcpy(first_2[i],"A");
break;

case 1:
strcpy(first_2[i],"2");
break;

case 2:
strcpy(first_2[i],"3");
break;

case 3:
strcpy(first_2[i],"4");
break;
case 4:
strcpy(first_2[i],"5");
break;

case 5:
strcpy(first_2[i],"6");
break;

case 6:
strcpy(first_2[i],"7");
break;

case 7:
strcpy(first_2[i],"8");
break;
case 8:
strcpy(first_2[i],"9");
break;

case 9:
strcpy(first_2[i],"10");
break;

case 10:
strcpy(first_2[i],"J");
break;

case 11:
strcpy(first_2[i],"Q");
break;


case 12:
strcpy(first_2[i],"K");
break;


}

}


for(i=0;i<13;i++)
{
printf("%s %s\n",first[i],first_2[i]);
}

return(0);

}

/*==================)))數值交換外部函式(((==================*/

void swap(int *a,int *b)
{
int copy;
copy=*a;
*a=*b;
*b=copy;
}