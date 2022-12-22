#include<stdio.h>
int prime();
void main(){
            
        prime();
            }
int prime() {
int a,i,f=0;
printf("enter a value\n");
scanf("%d",&a);
for(i=2;i<a;i++){
if(a%i==0){
f=1;}
}
if(f==0){
printf("prime\n");

}           
     else{
    printf("not prime");}
    }