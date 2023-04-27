#include<stdio.h>
int main(){
int grade,fgrade=0,sum=0,diff=0,comp=0;
printf("Enter your grade\n");
scanf("%d",&grade);

sum=grade/5;
comp=5*(sum+1);
diff=comp-grade;

if(grade<38){
printf("failing grade\n");}

else if(grade>37 && diff<3){
fgrade=grade+diff;
printf("final grade is %d\n",fgrade);
}

else{
printf("grade is %d\n",grade);}
return 0;
}