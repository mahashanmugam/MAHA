# Array
import java.util.Scanner;
public class Array{
public static void main(string[]args){
Scanner sc=new Scanner(system.in);
int len=sc.nextInt();
int a[]=new int[len];
for(int i=0;i<len;i++){
a[i]=sc.nextInt();
}
int sum=0;
int b=a.length;
int c=b/2;
int d=c+1;
int e=b-d;
int j=0;
int sum1=0;
int arr[]=new int[d];
int arr1[]=new int[e];
for(int i=0;i<=c;i++){
sum=sum+a[i];}
syatem.out.println(sum);
for(int i=c+1;i<b;i++){
sum1=sum1+a[i];
}if(sum/d==sum1/e){
for(int i=0;i<=c;i++){
arr[i]=a[i];
}
for(int i=c+1;i<b;i++){
arr1[j]=a[j];
j++;
}
system.out.println(arr);
system.out.println(arr1);
}
else{
system.out.println("not possible");
}
}
}
