//註:引入函式 srand( )


#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void swap(int *a , int *b)
{
int copy;
copy=*a;
*a=*b;
*b=copy;
}

int main(void)
{

int lottery[42];
int *pt;
int i;
int j;
int ran;

srand((unsigned)time(NULL));

/*==========================指定數字======================================*/
j=1;
for(i=0 ; i<42 ; i++)
{
lottery[i]=j;
j++;
}
/*========================================================================*/

for(i=0 ; i<7 ; i++)
{
pt=&lottery[i];
do
ran=rand()%42;
while(ran<i);
swap(pt,&lottery[ran]);
}
printf("樂透本期開獎號碼為====>\n");
for(i=0 ; i<7 ; i++)
printf("[%d] ",lottery[i]);
printf("\n");
return(0);
}