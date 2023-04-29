#include<stdio.h>
main(){
	int x,i,s,r;
	for(i=100;i<=10000;i++){
		x=i;
		s=0;
	while(x!=0){
		r=x%10;
		s=s+(r*r*r);
		x=x/10;}
           
	if(s==i){
	
			printf("%d\n",s);}}
	
			return 0;
			
}
