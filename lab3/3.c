/*Find second maximun from the array*/

#include<stdio.h>
int main()
{
    int array[5]={12,13,12,567,1123};
    int i,max1,max2;

    printf("Hole Array :\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }

    max1=max2=array[0];
    for(i=1;i<5;i++)
    {
        if(array[i]>max1)
        {
            max2=max1;
            max1=array[i];
        }
        else if(array[i]>max2 && array[i]<max1)
        {
            max2=array[i];

        }
    }

    printf("\nSecond leargest Number : %d ",max2);


    return 0;
}v
