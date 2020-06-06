#include<stdio.h>
int main()
{
    int array[5]={12,13,14,567,1123};
    int i,min1,min2;

    printf("Hole Array :\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }

    min1=min2=array[0];
    for(i=1;i<5;i++)
    {
        if(array[i]<min1)
        {
            min2=min1;
            min1=array[i];
        }
        else if(array[i]<min2 && array[i]>min1)
        {
            min2=array[i];

        }
    }

    printf("\nSecond minimum Number : %d ",min2);


    return 0;
}

