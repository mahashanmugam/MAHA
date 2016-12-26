#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("\n enter any number");
scanf("%d",&num);
if(num %2==0)
printf("\n %d is an even number",num);
else
printf("\n %d is an odd number",num);
getch();
return 0;
}
