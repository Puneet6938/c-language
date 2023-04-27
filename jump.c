#include<stdio.h>
main(){
int x1,x2,j1,j2,i,p,r,s,fact;

printf("Enter position and jump of 1st kangaroo\n");
scanf("%d%d",&x1,&j1);

printf("Enter position and jump of 2nd kangaroo\n");
scanf("%d%d",&x2,&j2);

p=(x1+j1)+(x2+j2);

for(i=0;i<p;i++){
r=(x1+(i*j1));
s=(x2+(i*j2));
if(r==s){
fact=1;}
}
if(fact==1){
printf("Yes\n");}
else{
printf("No\n");
}
}


