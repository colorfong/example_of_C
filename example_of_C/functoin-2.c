/*
*
* function 使用法
* ~練習~
*
*
*/
#include<stdio.h>

void
graph(void)
{
printf(" /\\ \n");
printf(" / \\ \n");
printf(" / \\ \n");
printf(" >--------< \n");
printf(" /\\ \n");
printf(" / \\ \n");
printf(" / \\ \n");
printf(" >--------< \n");
printf(" /\\ \n");
printf(" / \\ \n");
printf(" / \\ \n");
printf(" >--------< \n");
printf(" | \n");
printf(" | \n");
printf(" | \n");
printf(" ------------- \n");
}


int
main(void)

{
    int a;
    graph();
    printf("請輸入一個數字>");
    scanf("%d",&a);
    printf("%d是你輸入的",a);
    return(0);
}