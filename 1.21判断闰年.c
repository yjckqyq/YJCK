#include<stdio.h>
int main ()
{

int y=0;
scanf("%d",&y);
if((y%4==0 &&y%100!=0) ||(y%400==0))
printf("����");
return 0;
}
