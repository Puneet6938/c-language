#include<stdio.h>
#include<string.h>
main(){
char st1[50],st2[50];
int i,j=0,n;
printf("enter string:");
gets(st1);
n=strlen(st1);
//strcpy(st2,st1);
for(i=n-1;i>=0;i--,j++){
st2[j]=st1[i];}
st2[j]='\0';
if(strcmp(st2,st1)==0){
printf("palindrome\n");}
else{
printf("not palindrome");}
}