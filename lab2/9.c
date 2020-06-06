#include<stdio.h>
int main()
{
    int arr_size = 5;
    int i,index,j;
    int array[arr_size];

    printf("Please Enter Array Element : \n");
    for(i=0;i<arr_size;i++)
    {
        scanf("%d ",&array[i]);
    }

    printf("Before deleting : \n");

    for(i=0;i<arr_size;i++)
    {
        printf("%d ",array[i]);
    }

    printf("\nPlease enter deleting index (0-4) : ");
    scanf("%d",&index);


    j=index;

    while(j<arr_size-1)
    {
      array[j]=array[j+1];
        j++;

    }

    arr_size = arr_size-1;

    printf("\nAfter deleting : ");
    for(i=0;i<arr_size;i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
