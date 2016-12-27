#include<stdio.h>
#include<conio.h>
void main()
{
int number,k,flag,rem;
printf("enter a number \n");
scanf("%d",&number);
k=2;
flag=1;
while ((k<=number-1)&&(flag==1))
{
rem = number %k;
if(rem==0)
flag=0;
k++;
}
if(flag==1)
printf("%d is prime \n",number);
else
printf("%d is not prime \n",number);
getch();
}
