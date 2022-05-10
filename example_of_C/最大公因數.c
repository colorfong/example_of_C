 
/*================= 最大公因數 =====================
*
* 限用整數,負數可!
*
*================================================*/




#include<stdio.h>

#include<math.h>


int
main(void)

{
int first,second ;
int a,b ;


printf("求最大公因數之程式\n\n\n");

/*==========================================================*/

printf("請輸入第一個數>");
scanf("%d",&first);
printf("\n請輸入第2個數>");
scanf("%d",&second);

first=abs(first);
second=abs(second);


if( (first/second)>0 )
{
a=first;
b=second;
}
else if( (first/second)==0 )
{
a=second;
b=first;

}

/*================================================================*/



while(a!=0 && b!=0)
{


if(b!=0)
a=a%b ;



if(a!=0)
b=b%a ;


}



if(a==0)
printf("\n( %d , %d )之最大公因數為%d\n\n\n",first,second,b);
else if(b==0)
printf("\n( %d , %d )之最大公因數為%d\n\n\n",first,second,a);



return(0);
}