#include<stdio.h>
main(){
	int i,a,b,r,flag=0;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	for(i=1;i<=b && i<=a;++i){
		if(a%i==0 && b%i==0)
			r=i;
	}

	printf("hcf:%d\n",r);
}
