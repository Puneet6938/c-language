#include<stdio.h>
main(){
int i,j,arr[10][10],ar1[10][10],ar2[10][10],n;
scanf("%d",&n);

for(i=0;i<=n-1;i++){
for(j=0;j<=n-1;j++){
scanf("%d",&ar1[i][j]);}
}

for(i=0;i<=n-1;i++){
for(j=0;j<=n-1;j++){
scanf("%d",&ar2[i][j]);}
}

for(i=0;i<=n-1;i++){
for(j=0;j<=n-1;j++){
arr[i][j]=ar1[i][j]+ar2[i][j];
printf("%d\t",arr[i][j]);}
printf("\n");}

}