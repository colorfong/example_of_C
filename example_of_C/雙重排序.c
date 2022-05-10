//2組數字陣列和為一陣列，並加以排序

//註:可應用於2組多項式相加，同指數之項係數相加

#include<stdio.h>
#define MAX 999

void sort(double a[], int size);


int main(void)
{

double first[MAX];
double second[MAX];
double third[MAX*2];

int size;
int size2;


int i;

int x,y,z;


/*============================數字指定=================================*/
size=0;
printf("請輸入第一組陣列的數字(小數可,勿重複),輸入0表示整體陣列輸入結束\n");
do
{
printf("請輸入第%d個數字>",size+1);
scanf("%lf",&first[size]);

}
while(first[size++]!=0);
sort(first,--size);


size2=0;

printf("\n\n請輸入第2組陣列的數字(小數可,勿重複),輸入0表示整體陣列輸入結束\n");
do
{
printf("請輸入第%d個數字>",size2+1);
scanf("%lf",&second[size2]);

}
while(second[size2++]!=0);
sort(second,--size2);



/*============================數字指定=================================*/

x=0 ;
y=0 ;
z=0 ;

while(x<size && y<size2)

if(first[x]<second[y])
{
third[z]=first[x];
x++;
z++;
}
else if(first[x]>second[y])
{
third[z]=second[y];
y++;
z++;
}
else if(first[x]==second[y])
{
third[z]=first[x];
x++;
y++;
z++;
}


if(x==size)
for (;y<size2;y++)
{
third[z]=second[y];
z++;
}

if(y==size2)
for (;x<size;x++)
{
third[z]=first[x];
z++;
}



printf("\n新的陣列排序為下\n\n");
for(i=0 ; i<z; i++)
printf("%.2f\n",third[i]);


printf("\n\n");



return(0);
}





/*=================外部函式排序================*/

void sort(double a[], int size)
{

int x,y;
double copy;

for(x=0; x<size-1 ; x++)
for(y=x+1 ; y<size ; y++)
if(a[y]<a[x])
{ copy=a[x];
a[x]=a[y];
a[y]=copy;
}

}


/*=================外部函式排序================*/