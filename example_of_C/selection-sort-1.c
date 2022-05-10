// 由小到大排序，限定10個數字 。 SELECTION SORT。

#include<stdio.h>

void swap(int *a , int *b)
{
int copy;
copy=*a;
*a=*b;
*b=copy;
}

int
main(void)
{
int a[10] ;
int i;
int x,y ;
int *small;
for(i=0 ; i<=9 ; i++)
{
printf("Enter the %d number>",i+1);
scanf("%d",&a[i]);
}
for(x=0 ; x<=8 ; x++)
{
small=&a[x];
for(y=x+1 ; y <=9 ; y++)
{
if(a[y]<*small)
small=&a[y];
}
swap(&a[x],small);
}
for(i=0 ; i<=9 ; i++)
printf("THE SORT IS %d\n",a[i]);
return(0);
}