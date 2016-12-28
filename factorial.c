#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int num,f;
printf("enter a number \n");
scanf("%d",&num);
f=fact(num);
printf("fact=%d \n",f);
getch();
}
int fact(int num)
{
int f;
if(num==0)
return (1);
else
f=num*fact(num-1);
return f;
}
