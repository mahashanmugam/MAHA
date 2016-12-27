#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f1,f2,f3;
printf("enter the number");
scanf("%d",&n);
printf("first %d numbers of fibonaci series",&n);
f1=0;
f2=1;
printf("%d",f1);
printf("%d",f2);
i=3;
while(i<=n)
{
f3=f1+f2;
printf("%d",f3);
f1=f2;
f2=f3;
i++;
}
getch();
}
