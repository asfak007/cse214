/*Copy the given array into another array*/
#include<stdio.h>
int main()
{
    int i;
    int temp = 0;
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10];
    int size = 10;

    for(i=0; i<size; i++){
        printf("%d ",array1[i]);
    }
    printf("\n");

    for(i=0; i<size; i++){
        temp = arr1[i];
        arr2[i] = temp;
    }

    for(i=0; i<size; i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
