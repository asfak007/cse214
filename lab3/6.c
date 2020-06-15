/*Calculate the average of all elements of given array*/

#include<stdio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    int i,sum=0,avg;
    printf("Given Array : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }

    for(i=0;i<5;i++)
    {
        sum = sum+array[i];
    }

    avg = sum/5;

    printf("\nAverage Of this Array is : %d",avg);
    return 0;
}

