 

//按名子排序，修改版。

#include<stdio.h>
#include<string.h>

void swap(char *a,char*b)
{
char copy1[12];
char copy2[12];
strcpy(copy1,a);
strcpy(copy2,b);
strcpy(a,copy2);
strcpy(b,copy1);
}



int main(void)
{
char name[5][12];
char *pt[5];
int i,j;

char a[10]="aa";


if(strcmp("c","b")>0)
printf("yes");

strncat(a,"sdsdss",2);

printf("%s",a);



for(i=0;i<5;i++)
{
printf("請輸入第%d個名字>",i+1);
scanf("%s",name[i]);
}

for(i=0;i<5;i++)
{
pt[i]=name[i];
}


printf("您輸入以下名子>\n");


for(j=0;j<5;j++)
{

printf("%s==",pt[j]);
}


for(i=0;i<4;i++)
{
for(j=i+1;j<5;j++)
if(strcmp(pt[i],pt[j])>0)
swap(pt[i],pt[j]);
}



printf("\n按照a~z排序名子>\n");
for(i=0;i<5;i++)
printf("%s==",pt[i]);



return(0);

}