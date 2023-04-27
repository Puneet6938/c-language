#include<stdio.h>
#include<string.h>

void selection_sort(int ar[50], int n);
void swap(int *x,int *y);

int main(){
int ar[50],i,n;

printf("Enter n:");
scanf("%d",&n);

printf("Enter array:");
for(i=0;i<n;i++){
scanf("%d",&ar[i]);}

selection_sort(ar,n);
}

void selection_sort(int ar[], int n){
int i,j,min;
for(i=0;i<n-1;i++){
min=i;
for(j=i+1;j<n;j++){
if(ar[min]>ar[j])
min=j;
}
if(min!=i)
swap(&ar[min],&ar[i]);}
for(i=0;i<n;i++){
printf(" %d ",ar[i]);}

}

void swap(int *x,int *y){
int c;
c=*x;
*x=*y;
*y=c;
}