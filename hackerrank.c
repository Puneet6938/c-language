#include<stdio.h>
 
main(){
    int a,b,i;
    printf("Enter value of A:");
    scanf("%d",&a);
     printf("Enter value of B:");
    scanf("%d",&b);
        if(1<=a<=9 || 1<=b<=9 ){
            if(a<9){
                for(i=a;i<=9;i++){
                    printf("%d\n",i);   }
                   }
            else if(b<9){
                  for(i=b;i<=9;i++){
                    printf("%d\n",i); }    
                        }
                               }
    if(a>9){
        if(a%2==0){
            printf("even\n");
                  }
            else{
                printf("odd\n");
                }
          }
    if(b>9){
        if(b%2==0){
            printf("even\n");
                  }}
        else{
            printf("odd\n");
            }
           
}