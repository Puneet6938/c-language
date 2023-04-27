#include<stdio.h>
main(){
int n,i,j,ar1[50][50],m;

printf("enter order:");
scanf("%d",&n);

printf("enter matrix:");

for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
    scanf("%d",&ar1[i][j]);}
}
for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
    printf("%d ",ar1[i][j]);}
    printf("\n");
}
for(i=0;i<=n-1;i++){
    for(j=0;j<=n-1;j++){
    
    m=ar1[0][0];
    
      if(m<ar1[i][j]){
      m=ar1[i][j];
     printf("%d is maximum\n",m);}
    
    else {
   printf("%d is maximum\n",m);} } }
}