#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,product;
printf("\n enter a num ");
scanf("%d",&num);
for(i=1;i<=10;i++)
{

product=i*num;
printf("%d*%d=%d \n",num,i,product);
}
getch();
}
