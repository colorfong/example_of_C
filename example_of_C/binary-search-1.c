// (BINARY SEARCH 二分法) 加上 (SORT) 的技巧!!!


#include<stdio.h>
#define MAX 10

void
swap(int *a , int *b)
{
int copy;
copy=*a;
*a=*b;
*b=copy;
}

int
main(void)
{
int a[MAX];
int i;
int x,y;
int *small;
int k;
int m,n;
int value;

for(i=0 ; i<=MAX-1 ; i++)
{
printf("請輸入第%d位數字>",i+1);
scanf("%d",&a[i]);
}

for(x=0 ; x<=MAX-1 ; x++)
{small=&a[x];
for(y=x+1 ; y<=MAX-1 ; y++)
if(a[y]<*small)
small=&a[y];

swap(&a[x],small);
}

printf("========下為排序========\n");

for(i=0 ; i<=MAX-1; i++)
printf("%d\n",a[i]);



printf("========================");
printf("\n請輸入一位妳想搜尋的數字數字>");
scanf("%d",&value);




m=0;
n=MAX-1;


while(m<=n)
{
k=(m+n)/2 ;
if(value==a[k])
{
printf("找到了,位於陣列a[%d]\n",k);
break;
}


else if(value<a[k])
n=k-1;
else if(value>a[k])
m=k+1;


}

if(m>n)
printf("找不到此數字!!!\n");

return(0);
}


//註:binary search 搜尋速度很快。Big O = O (log n) (底數2)