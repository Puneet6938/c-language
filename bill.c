#include<stdio.h>

 main()
{
float unit,bill;
printf("enter the unit\n");
scanf("%f",&unit);
if(unit<200)
    {
    bill=unit*1.20;
    printf("bill=%f\n",bill);
    }
    else if(199<unit<400)
    {
            bill=((unit-199)*1.50) + (199*1.20);
            printf("bill=%f\n",bill);
    }
    
    else if(399<unit<600)
     {
                bill=((unit-399)*1.80)+(199*1.20)+(200*1.50);
                printf("bill=%d\n",bill);
    }
       
        
    

return 0;
}
