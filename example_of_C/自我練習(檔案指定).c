/*檔案指標*/

#include<stdio.h>

int
main(void)
{
FILE *fp;  //檔案指標
int i;


fp=fopen("new.txt","w");  //指向新的檔案，txt檔

fprintf(fp,"Hello,World...hihi!\n");   //寫入

for(i=0;i<100;i++)   //寫入1~100
{
fprintf(fp,"Here is %d\n",i);
}


fclose(fp);


return(0);
}
