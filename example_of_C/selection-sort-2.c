//selection sort 完美版。加入define。

#include<stdio.h>
#define MAX 10

void swap(int *m , int *n)
{
int temp;
temp=*m;
*m=*n;
*n=temp;
}

int main(void)
{
int a[MAX];
int *sm;
int x,i,j;

for(x=0; x<=MAX-1 ;x++)
{
printf("請輸入一個數目>");
scanf("%d",&a[x]);
}

for(j=0;j<=MAX-2;j++)
{
sm=&a[j];
for(i=j+1;i<=MAX-1;i++)
if(a[i]<*sm)
sm=&a[i];
swap(&a[j],sm);
}
for(x=0;x<=MAX-1;x++)
printf("%d\n",a[x]);
return(0);
}

//註:selection sort 為資料結構排序中一的一環。

//用了2層for，Big O為n平方。