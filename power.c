 #include<stdio.h>
 int main()
 {
 int base,exponent;
 long result = 1;
 printf("enter a base number:");
 scanf("%d",&base);
 printf("enter an exponent:");
 scanf("%d",&exponent);
 while(exponent!=0)
 {
 result=result*base;
 --exponent;
 }
 printf("answer=%d",result);
 return 0;
 }
