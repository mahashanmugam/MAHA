#include<stdio.h>
#include<string>
void main(){
char string[50],tmp[50];
int spcnt[50],i,j,c;
printf("Enter a string : ");
gets(string);
for(i=0;string[i];i++)
{
string[i]=string[i]+3;
}
printf("\n");
printf("Encoded string is as follow : %s",string);
string[i]=string[i]-3;
getch();
}
