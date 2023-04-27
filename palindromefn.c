#include<stdio.h>
#include<string.h> 
int pal(char st1[50]);

int pal(char st1[50]){

char st2[50];
int i,j=0,n,flag=0;

//printf("enter string:");
//gets(st1);
n=strlen(st1);

for(i=n-1;i>=0;i--,j++){
     st2[j]=st1[i];
     }

//st2[j]='\0';
if(strcmp(st2,st1)==0){
flag=1;}
/*printf("palindrome\n");}    
else{
printf("not palindrome");}*/
return flag;
}

int main(){

char st1[50];
printf("enter string:");
gets(st1);
pal(st1);

if(pal(st1)==1){
printf("palindrome");
}

else {
printf("not palindrome");}
}