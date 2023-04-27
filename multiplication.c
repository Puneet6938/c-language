#include<stdio.h>
main(){
int i,j,arr[50][50],ar1[50][50],ar2[50][50],n,k;

printf("enter the order of matrix:");
scanf("%d",&n);

printf("enter 1st matrix\n");

for(i=0;i<=n-1;i++){
for(j=0;j<=n-1;j++){
scanf("%d",&ar1[i][j]);}
}
for(i=0;i<=n-1;i++){
for(j=0;j<=n-1;j++){
printf("%d ",ar1[i][j]);}
printf("\n");
}
printf("enter 2nd matrix\n");

for(i=0;i<=n-1;i++){
for(j=0;j<=n-1;j++){
scanf("%d",&ar2[i][j]);}
}
for(i=0;i<=n-1;i++){
for(j=0;j<=n-1;j++){
printf("%d ",ar2[i][j]);}
printf("\n");
}

for(i=0;i<n;i++){
for(j=0;j<n;j++){
arr[i][j]=0;
for(k=0;k<n;k++){
arr[i][j]+=ar1[i][k]*ar2[k][j];}}}

printf("multiplication of 2 matrix is\n");

for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf("%d ",arr[i][j]);}
printf("\n");}
}