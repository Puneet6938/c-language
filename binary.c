#include<stdio.h>
#include<string.h>
main(){

int ar[50],i,n;
int low,high,mid,a;

scanf("%d",&n);

printf("array:");
for(i=0;i<n;i++){
	scanf("%d",&ar[i]);
}

printf("enter a:");
scanf("%d",&a);
;

low=0;
high=n-1;


while(low<=high){
	mid=(low+high)/2;
	if(ar[mid]==a){
		printf("%d\n",mid);
		break;
	}
	else if(ar[mid]<a){
		low=mid+1;
	}
	else{
		high=mid-1;
	}
}
}
