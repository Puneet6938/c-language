#include<stdio.h>

int main()
{
    int n=5794,r=0,u,a;
    printf("n=5794\n");
    a=n;
    while(a!=0){
    u=a%10;
    r=r*10+u%10;
   a=a/10;
    }
    printf("%d\n",r);
    
    return 0;
}