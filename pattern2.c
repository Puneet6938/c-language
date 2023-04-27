#include<stdio.h>
main(){
int n,i,j;
printf("Enter the value of n\n");
scanf("%d",&n);
for(i=1; i<=2*n-1 ;i++){
for(j=2*n-1; j>=1 ;j--){
printf("%d ",n);
}

printf("\n");
--n;}
}