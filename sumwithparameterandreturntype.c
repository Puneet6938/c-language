#include<stdio.h>
int sum(int a ,int b);
int main(){
int a,b, result;
printf("please enter a and b\n");
scanf("%d%d",&a,&b);
result=sum(a,b);
printf("sum=%d", result);}
int sum(int a, int b){
int result;
result=a+b;
return result;}