#include<stdio.h>
void swap(int a,int b);
int main(){
int a,b;
printf("enter a and b\n");
scanf("%d%d",&a,&b);
swap(a,b);
}
void swap(int a,int b){
a=a+b;
b=a-b;
a=a-b;
printf("a=%d\n",a);
printf("b=%d\n",b);
}