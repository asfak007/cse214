/*Find minimum from the array*/
#include<stdio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    int i, min;

     printf("Hole Array :\n");
     for(i=0;i<5;i++)
     {
         printf("%d ",array[i]);
     }
     min = array[0];

     for(i=1;i<5;i++)
     {
         if(min>array[i])
         {
             min=array[i];
         }
     }
     printf("\nMinimum value : %d  ",min);

    return 0;
}
