#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("\n enter any character:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
printf(" \n %c is vowel",ch);
else
printf("\n %c is not a vowel");
return 0;
}
