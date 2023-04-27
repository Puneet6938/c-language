#include<stdio.h>
int reverse(int a,int r,int s);

int reverse(int a,int r,int s){
while(a!=0){
r=a%10;
s=s*10+r;
a=a/10;}
return s;
}

main(){
int a,r,s;
printf("enter a\n");
scanf("%d",&a);
printf("reverse=%d\n",reverse(a,r,s));
}