#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,arr[20],large=-1111;
clrscr();
printf("\n enter the number of elements in the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
if(arr[i]>large)
large=arr[i];
}
printf("\n the largest number is:%d",large);
return 0;
}
